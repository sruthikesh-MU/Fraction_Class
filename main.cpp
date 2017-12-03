#include <iostream>
#include <algorithm>

using namespace std;

class Fraction
{
public:
    float number;
    Fraction(){}
    Fraction(int num): number(num){}
    float operator+ (const Fraction&);
    float operator- (const Fraction&);
    float operator* (const Fraction&);
    float operator/ (const Fraction&);
    void operator> (const Fraction&);
    bool operator!= (const Fraction&);
    void display()
    {
        cout << "The number is: " << number;
    }
};

float Fraction::operator+ (const Fraction& param)
{
    Fraction res;
    res.number = number+param.number;
    return res.number;
}

float Fraction::operator- (const Fraction& param)
{
    Fraction res;
    res.number = number - param.number;
    return res.number;
}

float Fraction::operator* (const Fraction& param)
{
    Fraction res;
    res.number = number*param.number;
    return res.number;
}

float Fraction::operator/ (const Fraction& param)
{
    if (param.number != 0)
    {
        Fraction res;
        res.number = number/param.number;
        return res.number;
    }
    else
    {
        cout << "Invalid Denominator";
        return 0;
    }
}

bool Fraction::operator!= (const Fraction& param)
{
    if(number != param.number)
    {
        return false;
    }
    else{return true;}
}

void Fraction::operator> (const Fraction& param)
{
    if(param.number > number)
    {
        cout << "The number is greater";
    }
    else{cout << "The number is smaller";}
}

int main()
{
    return 0;
}
