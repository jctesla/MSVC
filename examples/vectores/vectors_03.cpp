// Access Elements by Index of a Vector
// In C++, we use the index number to access the vector elements.
// Here, we use the "at()"" function to access each element from the specified index. For example,

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  printf("vector num= ");                       // vector num= 1  2  3  4  5
  for (int i=0; i< num.size();i++) {
    printf("%d  ",num[i]);
  }

  printf("\nRead Val of Index:\n");
  printf("Read Index 0: %d\n",num.at(0));
  printf("Read Index 0: %d\n",num.at(2));
  printf("Read Index 0: %d\n",num.at(4));

  printf("\nIf Insert a val to Vector:\n");
  num.insert(num.begin(), 6);
  for (const int& i : num) {
    printf("%d  ",i);
  }


  // change elements at indexes 1 and 4
  printf("\nChange val of vector in index:\n");
  num.at(1) = 100;
  num.at(4) = 400;
  for (const int& i : num) {
    printf("%d  ",i);
  }

  // remove the last element
  printf("\nDelete elemt of vector:\n");
  num.pop_back();
  for (const int& i : num) {
    printf("%d  ",i);
  }

  // erase the first element
  printf("\nDelete elemt of vector:\n");
  auto it1 = num.begin();
  auto it2 = num.end();
  it2--;
  it2--;
  num.erase(it1,it2);

  for (const int& i : num) {
    printf("%d  ",i);                           // 3  400
  }


  return 0;
}

// Out:
// vector num= 1  2  3  4  5
// Read Val of Index:
// Read Index 0: 1
// Read Index 0: 3
// Read Index 0: 5
// 
// If Insert a val to Vector:
// 6  1  2  3  4  5
// Change val of vector in index:
// 6  100  2  3  400  5
// Delete elemt of vector:
// 6  100  2  3  400
// Delete elemt of vector:
// 3  400
