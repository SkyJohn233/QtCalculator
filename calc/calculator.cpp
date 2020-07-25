#include <bits/stdc++.h>
#include "calculator.h"

using std::stringstream;
using std::string;
using std::cout;
using std::cin;
using std::ostream;
using std::istream;
using std::endl;
using std::stack;
using std::vector;

bool iseql(double d,double tar){
    return fabs(d-tar)<1e-8;
}
Complex::Complex(double a,double b):real(a),image(b){

}
Complex::~Complex()= default;
Complex Complex::operator+(const Complex& b){
    return Complex(this->real+b.real,this->image+b.image);
}

Complex Complex::operator-(const Complex& b){
    return Complex(this->real-b.real,this->image-b.image);
}

Complex Complex::operator*(const Complex& b){
    double treal = this->real*b.real-this->image*b.image;
    double timage = this->real*b.image+this->image*b.real;
    return Complex(treal,timage);
}

Complex Complex::operator/(const Complex& b){
    double t = b.real*b.real+b.image*b.image;
    double treal = this->real*b.real+this->image*b.image;
    double timage = this->image*b.real-this->real*b.image;
    if(iseql(t,0)) cout<<"divided by Complex 0+0i"<<endl;
    return Complex(treal/t,timage/t);
}
ostream& operator<<(ostream& out,const Complex& a){
    out<<a.real;
    if(a.image>0) out<<"+";
    if(!iseql(a.image,0)) out<<a.image<<"i";
    out<<endl;
    return out;
}

istream& operator>>(istream& in,Complex& a){
    in>>a.real>>a.image;
    return in;
}

int Calcultor::level[129];
void Calcultor::init(){
    memset(Calcultor::level,0,sizeof(Calcultor::level));
    Calcultor::level['+']=Calcultor::level['-']=3;
    Calcultor::level['*']=Calcultor::level['/']=4;
    Calcultor::level['(']=Calcultor::level[')']=1;
    Calcultor::level['^']=5;
}
int Calcultor::parse(const string& s,vector<elem>& vec){
    //return 0 if parse successful -1 if not
    int slen = s.length();
    int lp=0;
    // check ( ) correctness and check no other invaild char in string
    for(int i=0;i<slen;++i){
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='.'||s[i]=='^') continue;
        if(s[i]>='0'&&s[i]<='9') continue;
        if(s[i]=='('){
            lp++;
        }
        else if(s[i]==')') {
            lp--;
        }
        else return this->errorcode=-1;
        if(lp<0) return this->errorcode=-1;
    }
    double tt,ss;
    int mime,k;// mime is flag for '.' k is flag for the num
    tt=ss=mime=k=0;
    for(int i=0;i<slen;++i){
        if(s[i]>='0'&&s[i]<='9'){
            k=1;
            if(mime){
                tt+=ss*(s[i]-'0');
                ss*=0.1;
            }
            else {
                tt=tt*10+(s[i]-'0');
            }
        }
        else if(s[i]=='.'){
            if(mime)
                return this->errorcode=-1;
            mime=1;
            ss=0.1;
        }
        else {
            elem tmp;
            if(k==1){
                tmp.isnum=true;tmp.data.d=tt;
                vec.push_back(tmp);
                tt=ss=mime=k=0;
            } //record num
            if(s[i]=='+'||s[i]=='-') {
                if (i == 0 || (!vec.back().isnum && vec.back().data.ch == '(')) {
                    tmp.isnum = true;
                    tmp.data.d = 0;
                    vec.push_back(tmp);
                }
            }
            tmp.isnum=false;tmp.data.ch=s[i];
            vec.push_back(tmp);
        }
    }
    if(k==1){
        elem tmp;
        tmp.isnum=true;tmp.data.d=tt;
        vec.push_back(tmp);
        tt=ss=mime=k=0;
    }
     // 现在只剩一种错误情况,操作数和数字个数不匹配
    return 0;
}
string Calcultor::calculte(const string& s) {
    vector<elem> vec;
    this->parse(s,vec);
    if(this->errorcode)
        return "error";
    stack<char> sstack;
    stack<double> nstack;
    int vlen = vec.size();
    for(int i=0;i<vlen;++i){
        if(vec[i].isnum)
            nstack.push(vec[i].data.d);
        else{
            char cur=vec[i].data.ch;
            if(cur=='('){
                sstack.push(cur);
                continue;
            }
            while(!sstack.empty()&&this->level[sstack.top()]>=this->level[cur]){
                char tmp=sstack.top();sstack.pop();
                if(tmp=='(') break;
                if(nstack.size()<2){
                    this->errorcode=-1;
                    return "error";
                }
                double tnum2=nstack.top();nstack.pop();
                double tnum1=nstack.top();nstack.pop();
                switch(tmp){
                    case '+':{
                        tnum1+=tnum2;break;
                    }
                    case '-':{
                        tnum1-=tnum2;break;
                    }
                    case '*':{
                        tnum1*=tnum2;break;
                    }
                    case '/':{
                        if(iseql(tnum2,0)){
                            this->errorcode=-1;
                            return "error";
                        }
                        tnum1/=tnum2;break;
                    }
                    case '^':{
                        tnum1=pow(tnum1,tnum2);
                        break;
                    }
                    default:{
                        this->errorcode=-1;
                        return "error";
                    }
                }
                nstack.push(tnum1);
            }
            if(cur!=')') sstack.push(cur);
        }
    }
    while(!sstack.empty()){
        char tmp=sstack.top();sstack.pop();
        if(nstack.size()<2){
            this->errorcode=-1;
            return "error";
        }
        double tnum2=nstack.top();nstack.pop();
        double tnum1=nstack.top();nstack.pop();
        switch(tmp){
            case '+':{
                tnum1+=tnum2;break;
            }
            case '-':{
                tnum1-=tnum2;break;
            }
            case '*':{
                tnum1*=tnum2;break;
            }
            case '/':{
                if(iseql(tnum2,0)){
                    this->errorcode=-1;
                    return "error";
                }
                tnum1/=tnum2;break;
            }
            case '^':{
                tnum1=pow(tnum1,tnum2);
                break;
            }
            default:{
                this->errorcode=-1;
                return "error";
            }
        }
        nstack.push(tnum1);
    }
    if(nstack.size()!=1){
        this->errorcode=-1;
        return "error";
    }
    double ans = nstack.top();
    stringstream ss;ss<<ans;
    return ss.str();
}
string Calcultor::mypow(double x, int y) {
    //快速幂
    bool f=y<0;
    double ans=1;
    double t=x;
    while(y){
        if(y&1)
            ans*=t;
        t*=t;
        y>>=1;
    }
    if(f)
        ans=1.0/ans;
    return std::to_string(ans);
}

string Calcultor::mysqrt(double a){
    //Newton's method
    if(a<0)
        return "don't input negative number";
    double ans = 10;
    while(abs(ans*ans-a)>1e-7){
        ans-=(ans*ans-a)/(2*ans);
    }
    return std::to_string(ans);
}
