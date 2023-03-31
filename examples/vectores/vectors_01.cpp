// https://www.programiz.com/cpp-programming/vectors
// In C++, vectors are used to store elements of similar data types
// However, unlike arrays, the size of a vector can grow dynamically.
// That is, we can change the size of the vector during the execution of a program as per our requirements.
// Declaracion:
// std::vector<Type> vector_name;       // It can be any primitive data type such as int, char, float, etc.
                                        // Notice that we have not specified the SIZE of the vector during the declaration. 
                                        // This is because the SIZE of a VECTOR can grow dynamically so it is not necessary to define it.

//En Ej sgnt vemos 3 metodos de declara un VECTOR.                                        
#include <iostream>
#include <vector>
using namespace std;                    // sino coloco esto :. tendria q colocar en c/cod std::vector<int> v{ 1, 2, 3, 4, 5 };

int main() {

  // METHOD 01
  vector<int> vector1 = {1, 2, 3, 4, 5};    // initializer list
  printf("vector1 = ");
  for (const int& i : vector1) {
    printf("%d  ",i);
  }
  
  // METHOD 02
  vector<int> vector2{6, 7, 8, 9, 10};      // uniform initialization
  cout << "\nvector2 = ";
  for (const int& i : vector2) {
    cout << i << "  ";
  }

  // METHOD 03
  vector<int> vector3(5, 12);               // 5 es el SIZE del Vector y 12 es el valor del elemento.
  printf("\nvector3 = ");                   // esto es equivalente = vector<int> vector3 = {12, 12, 12, 12, 12};
  for (int i : vector3) {
    cout << i << "  ";
  }

  return 0;
}


// Out:
// vector1 = 1  2  3  4  5
// vector2 = 6  7  8  9  10
// vector3 = 12  12  12  12  12