#include <iostream>
#include <string>

 using namespace std;

//---------------------------------------------
//            CLASES
//---------------------------------------------
class MyClass {                     // The class (class minuscula y Nomb con Mayuscula)
  public:                           // Access specifier
    void myMethod() {               // Method/function defined inside the class
      printf("Hello World!");
    }
};

//---------------------------------------------
//            Main
//---------------------------------------------
int main() {
  MyClass myObj;                    // Create an object of MyClass
  myObj.myMethod();                 // Call the method
  return 0;
}