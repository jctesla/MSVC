// NOTA Convert String to Char array
#include<iostream>
#include <cstring>

using namespace std;                                                // permite usar el 'cout'
 
 int main(){
    // assigning value to string s
    string s = "hola amigos";
    int n = s.length();
    cout << "len(s)=" << n << " letras\n";

    // declaring character array
    char arry[n + 1];
 
    // copying the contents of the
    // string to char array
    strcpy(arry, s.c_str());
 
    for (int i = 0; i < n; i++)
        cout << arry[i] << "-";
 
    return 0;
 }