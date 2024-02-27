#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex& other)
	{
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }
    void display()
	{
        cout << "Real: " << real << " Imaginary: " << imag << endl;
    }
};
int main()
{
    Complex c1(3, 2);
    Complex c2(4, 5);
    Complex result = c1 + c2;
    cout << "Result: ";
    result.display();
    return 0;
}
