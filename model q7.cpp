#include <iostream>
using namespace std;
class Shape
{
protected:
  double w;
  double h;
  double sqrt;
public:
  Shape(double w, double h)
  {
    this->w = w;
    this->h = h;
  }
  virtual double area() = 0;
  virtual double perimeter() = 0;
};
class Rectangle : public Shape
{
public:
  Rectangle(double w,double h):Shape(w, h){}
  double area()
  {
    return w * h;
  }
  double perimeter()
  {
    return 2 * (w + h);
  }
};
class Triangle : public Shape
{
public:
  Triangle(double w, double h):Shape(w,h){}
  double area()
  {
    return 0.5 * w * h;
  }
  double perimeter()
  {
    return w + h +(w * w + h * h);
  }
};
int main()
{
  Rectangle rectangle(5,10);
  cout<< "Rectangle area: " << rectangle.area()<< endl;
  cout<< "Rectangle perimeter: " << rectangle.perimeter()<< endl;
  Triangle triangle(5,10);
  cout<< "Triangle area: " << triangle.area()<< endl;
  cout<< "Triangle perimeter: " << triangle.perimeter()<< endl;
  return 0;
}
