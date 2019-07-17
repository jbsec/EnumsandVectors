#include <iostream>

int main() {
//  std::cout << "Hello World!\n";
}

// Enumerations

/*

enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red};

Color col = Color::red;
Traffic_light light = Traffic_light::red;

Color x = red; //error which red
Color y  = Traffic_light::red; // this red is not a Color
Color z = Color::red;

*/


// Vector 

/*

class Vector {
  public:
    Vector(int s) :elem{new double[s]}, sz{s} {}
    // vector construtor doesnt work
    double& operator[](int i) { return elem[i]; }
    int size() { return sz; }
  private:
    double* elem; // pointer to the elements
    int sz; // the number of elements
};

Vector v(6); // vector with 6 elements

double read_and_sum(int s)
{
  Vector v(s); // make vector of s elements
  for (int i=0; i!=v.size(); ++i)
    cin>>[i];

  double sum = 0;
  for (int i=0; i!=v.size(); ++i)
    sum+=v[i];
  return sum;
}

*/

