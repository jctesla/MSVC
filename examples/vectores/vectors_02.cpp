// https://www.programiz.com/cpp-programming/vectors
// 1. Add Elements at final & begin of the vector.
// To add a single element into a vector, we use the "push_back()"" function. 
// It inserts an element into the end of the vector. For example;

#include <iostream>
#include <vector>
using namespace std;                      

int main() {
  vector<int> num {5, 4, 3, 2, 1};
  cout << "Initial Vector: ";
  for (const int& i : num) {
    cout << i << "  ";
  }
  
  
  num.push_back(6);                       // add at final int 6 to the vector
  num.push_back(7);                       // add at final int 7 to the vector      
  num.insert(num.begin(),0);              // add at begin of the vector value 0  Ej: <vector>.begin() = pos Inicial<dir mem = 17070080>
  num.insert(num.begin(),-1);             // add at begin of the vector value -1 Ej: <vector>.end() = pos final<dir mem = 17070104>

  printf("\nUpdated Vector: ");
  for (const int& i : num) {
    printf("%d  ",i);
  }



  // alternative we can do:
  printf("\n\nAnother Form  : ");
  num.clear();
  int sum (0);
  num.push_back (100);
  num.push_back (200);
  num.push_back (300);

  printf("\nElmnts pushed : ");
  while (!num.empty()){           // return TRUE if Vector is empty.
    int val = num.back();         // Leo: returns a read/write ref to the data at the last element of vector.
    printf("%d ",val);
    sum+=val;
    num.pop_back();               // Borro: Removes the last element in the vector, effectively reducing the container size by one.
  }
  printf("\nSum de los Elemnts de num=%d",sum);

  return 0;
}

// Out:
// Initial Vector: 5  4  3  2  1
// Updated Vector: -1  0  5  4  3  2  1  6  7
//
// Another Form  :
// Elmnts pushed : 300 200 100
// Sum de los Elemnts de num=600