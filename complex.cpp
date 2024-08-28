#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    void setvalue()
    {
        cin >> real;
        cin >> img;
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

Complex sum(Complex c1, Complex c2)
{
    Complex c;
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return c;
}

Complex difference(Complex c1, Complex c2)
{
    Complex c;
    c.real = c1.real - c2.real;
    c.img = c1.img - c2.img;
    return c;
}

int main()
{
    Complex c1, c2, c3, c4;
    c1.setvalue();
    c2.setvalue();
    c1.display();
    c2.display();

    c3 = difference(c1, c2);
    c3.display();
    c4 = sum(c1, c2);
    c4.display();

    return 0;
}