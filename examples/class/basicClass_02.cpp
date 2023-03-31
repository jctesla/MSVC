#include <iostream>
#include <string>     // std::string, std::to_string
using namespace std;

class Car {
  public:
    Car(int num){                                             // constructo
      printf("numero = %d \n",num);
    }
    string speed(int maxSpeed);                               // declaro un Meth publico
};

string Car::speed(int maxSpeed) {                             // desarrollo del Meth
  string miStr = std::to_string(maxSpeed);
  return (miStr + " km/hr");
}

int main() {
  Car myObj(23); // Create an object of Car
  printf("myObj.speed = %s \n",myObj.speed(200).c_str());     // myObj.speed = 200 km/hr    nota: .c_str() = convierte de string a char*
  return 0;
}