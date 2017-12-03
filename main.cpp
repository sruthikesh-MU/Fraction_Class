#include <iostream>

using namespace std;

class Fraction
{
public:
    int numerator, denominator;
    Fraction(){}
    Fraction(int n, int d): numerator(n), denominator(d){}
    Fraction operator+ (const Fraction&);
    Fraction operator- (const Fraction&);
    Fraction operator* (const Fraction&);
    Fraction operator/ (const Fraction&);
    void operator> (const Fraction&);
    bool operator!= (const Fraction&);
    void display(){cout << "The number is: " << numerator/denominator;}
};

Fraction Fraction::operator+ (const Fraction& param)
{
    Fraction res;
    if(denominator == 0 || param.denominator == 0)
    {
        throw invalid_argument("denominator is 0");
    }
    res.denominator = denominator*param.denominator;
    res.numerator = numerator*param.denominator + param.numerator*denominator;
    return res;
}

Fraction Fraction::operator- (const Fraction& param)
{
    Fraction res;
    if(denominator == 0 || param.denominator == 0)
    {
        throw invalid_argument("denominator is 0");
    }
    res.denominator = denominator*param.denominator;
    res.numerator = numerator*param.denominator - param.numerator*denominator;
    return res;
}

Fraction Fraction::operator* (const Fraction& param)
{
    Fraction res;
    if(denominator == 0 || param.denominator == 0)
    {
        throw invalid_argument("denominator is 0");
    }
    res.numerator = numerator*param.numerator;
    res.denominator = denominator*param.denominator;
    return res;
}

Fraction Fraction::operator/ (const Fraction& param)
{
    Fraction res;
    if(denominator == 0 || param.denominator == 0)
    {
        throw invalid_argument("denominator is 0");
    }
    res.numerator = numerator*param.denominator;
    res.denominator = denominator*param.numerator;
    return res;
}

bool Fraction::operator!= (const Fraction& param)
{
    if(denominator == 0 || param.denominator == 0)
    {
        throw invalid_argument("denominator is 0");
    }
    if(numerator*param.denominator != param.numerator*denominator){return true;}
    else{return false;}
}

void Fraction::operator> (const Fraction& param)
{
    if(denominator == 0 || param.denominator == 0)
    {
        throw invalid_argument("denominator is 0");
    }
    if(numerator/denominator > param.numerator/param.denominator){cout << "The number is smaller";}
    else{cout << "The number is greater";}
}

int main()
{
    return 0;
}
