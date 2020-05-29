//
// Created by skyjohn on 2020/5/23.
//

#ifndef INC_1_CALCULATOR_H
#define INC_1_CALCULATOR_H
#include <bits/stdc++.h>
using std::ostream;
using std::istream;
using std::vector;
using std::string;
class Complex{
public:
    double real,image; // real 实部 image 虚部
    Complex(double a,double b);
    ~Complex();
    Complex operator+(const Complex& b);
    Complex operator-(const Complex& b);
    Complex operator/(const Complex& b);
    Complex operator*(const Complex& b);
    friend ostream& operator<<(ostream& out,const Complex& a);
    friend istream& operator>>(istream& in,Complex& a);
};

typedef struct {
    union{
        char ch;
        double d;
    } data;
    bool isnum;
} elem;
class Calcultor{
private:
    static int level[129];
public:
    int errorcode;//0 无错误 -1 四则运算输入有误 -2 求解n元线性方程有误
    string calculte(const string& s);
    static void init();
    int parse(const string& s,vector<elem>& vec);
};
#endif //INC_1_CALCULATOR_H
