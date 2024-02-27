#include <iostream>
using namespace std;
class MyException : public exception
{
public:
  virtual const char* what() const throw()
  {
    return "My exception";
  }
};
void myFunction()
{
  try
  {
    throw MyException();
  }
  catch (MyException& e)
  {
    cout << "Caught MyException: " << e.what() << endl;
  }
  {
    cout << "Finally block executed" << endl;
  }
}
int main()
{
  myFunction();
  return 0;
}
