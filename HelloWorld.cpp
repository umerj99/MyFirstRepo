#include <iostream>
int add (int a, int b) {
  int c = a + b;
  return c;
}

float subtract (float d, float e){
    float subtract = d - e;
    return subtract;
}

double multiply (double f, double g){
     double multiply = f*g;
     return multiply;
}
    
int main(){
  std::cout << "Hello, World!" << std::endl
    << "How are you doing?" << std::endl;
  std::cout << "3 + 5 is " << add(3, 5) << std::endl
   << "3.0 - 5.0 is " << subtract (3.0, 5.0) << std::endl
   << "3.0*5.0 is" << multiply(3.0,5.0) << std::endl;
}

