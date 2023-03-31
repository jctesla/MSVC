// Obtener el indice de un vector si el elemento buscado existe en sus filas.

#include <bits/stdc++.h>
using namespace std;
  
// Func print index of an element
int getIndex(vector<int> v, int K){
    auto it = find(v.begin(), v.end(), K);                      // v.begin() = pos puntero Inicial / v.end() pos puntero final
                                                                // it = es una variable q se define cuando se l da un valor.
    printf("it=%d begin=%d  fin=%d",it,v.begin(),v.end());

    // If element was found                                             
    if(it != v.end()){
        // calculating the index of K
        int index = it - v.begin();
        return index;
    }else {
        // If the element dont exit in the vector
        return -1;
    }
}

// --------------MAIN -----------------------
int main(){
    // p un vector de integer.
    vector<int> v = { 1, 45, 54, 71, 76, 17 };
    int K = 17;
    printf("\nEl index del elemnt con valor=%d  es=%d",K,getIndex(v, K));
    return 0;
}