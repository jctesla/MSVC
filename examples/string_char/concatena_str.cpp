// to_string example
#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string
using namespace std;

int main(){
  std::string pi = "pi is " + std::to_string(3.1415926);

  // The problem is that printf/scanf are not typesafe.
  // You're supplying a 'std::string' object where 'printf' expects a const 'char*'.
  string perfect = std::to_string(1+2+4+7+14) + " is a perfect number";
  printf("1. string perfect = %s \n",perfect);
  
  // then we have to convert in ti string explicity
  printf("2. string perfect = %s \n",perfect.c_str());        // .c_str() = const char* c_str() const;

  std::cout << "2. " << perfect << '\n';
  std::cout << "3. " << pi << '\n';
  return 0;
}

/*
  1. string perfect = ►ƒ  ☺
  2. string perfect = 28 is a perfect number
  2. 28 is a perfect number
  3. pi is 3.141593
*/