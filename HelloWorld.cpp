#include <iostream>
int add (int a, int b) {
  int c = a + b;
  return c;
}
    
int main(){
  std::cout << "Hello, World!" << std::endl
    << "How are you doing?" << std::endl;
  std::cout << "3 + 5 is " << add(3, 5) << std::endl;
}

