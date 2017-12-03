#include <iostream>

using namespace std;

class Fraction
{
public:
    int numerator, denominator;
    Fraction(){}
    Fraction(int n, int d): numerator(n), denominator(d){}
    float operator+ (const Fraction&);
    float operator- (const Fraction&);
    float operator* (const Fraction&);
    float operator/ (const Fraction&);
    void operator> (const Fraction&);
    bool operator!= (const Fraction&);
    void display(){cout << "The number is: " << number;}
};

float Fraction::operator+ (const Fraction& param)
{
    Fraction res;
    res.denominator = denominator*param.denominator;
    res.numerator = numerator*param.denominator + param.numerator*denominator;
    return res;
}

float Fraction::operator- (const Fraction& param)
{
    Fraction res;
    res.denominator = denominator*param.denominator;
    res.numerator = numerator*param.denominator - param.numerator*denominator;
    return res;
}

float Fraction::operator* (const Fraction& param)
{
    Fraction res;
    res.numerator = numerator*param.numerator;
    res.denominator = denominator*param.denominator;
    return res;
}

float Fraction::operator/ (const Fraction& param)
{
    Fraction res;
    res.numerator = numerator/param.numerator;
    res.denominator = denominator/param.denominator;
    return res;
}

bool Fraction::operator!= (const Fraction& param)
{
    if(numerator/denominator != param.numerator/param.denominator){return false;}
    else{return true;}
}

void Fraction::operator> (const Fraction& param)
{
    if(numerator/denominator > param.numerator/param.denominator){cout << "The number is greater";}
    else{cout << "The number is smaller";}
}

int main()
{
    return 0;
}
