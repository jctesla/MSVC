// NPOTA: este un C++ puro muy parecido al arduino c++
// https://www.geeksforgeeks.org/convert-character-array-to-string-in-c/

#include<iostream>
#include<vector>
using namespace std;                                                // permite usar el 'cout'

// es un prototipo
string charToString(char* a, int size);

int main(){
 
  //-------------------------------------------
  //    CHARs
  //-------------------------------------------
  char arr[] = "momy";
  cout << "1.  arr[] = " << std::string(arr) << "\n";               // onvierto un arry char a string

  char sa[] = { 'h','o','l','a'};
  cout << "2.  sa[x] = " << std::string(sa) << "\n";
  cout << "3.  sa[1] = " << sa[1] << "\n";
  
  int len_sa = sizeof(sa)/sizeof(char);                             // divide el tipo de c/elmento p saber el total.
  cout << "4.  len(sa) = " << len_sa << " elementos \n";
  cout << "5.  char to string  = " << charToString(sa,len_sa) << "\n";
}


//-----------------------------------------------------
//        FUNCTIONS
//----------------------------------------------------
string charToString(char* a, int size){
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}