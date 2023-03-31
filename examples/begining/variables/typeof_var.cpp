// To get the datatype of variable, use typeid(x).name() of typeinfo library.
// It returns the type name of the variable as a string.

#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;  

int main() {
    // Init
    int a = 10;
    long int b = 100000;
    float c = 5/15;
    string d = "Hello";
    string e = "Hello";
    string f = "OK";
    bool g= true;

    // typeid()
    const std::type_info &ai = typeid(a);
    const std::type_info &bi = typeid(b);
    const std::type_info &ci = typeid(c);
    const type_info &di = typeid(d);
    const type_info &ei = typeid(e);
    const type_info &fi = typeid(f);
    const type_info &gi = typeid(g);

    // Print puntero mem | tipo de var
    printf("mem puntero a: %p type=%s\n", &ai, ai.name());
    printf("mem puntero b: %p type=%s\n", &bi, bi.name());
    printf("mem puntero c: %p type=%s\n", &ci, ci.name());
    printf("mem puntero d: %p type=%s\n", &di, di.name());
    printf("mem puntero e: %p type=%s\n", &ei, ei.name());
    printf("mem puntero f: %p type=%s\n", &fi, fi.name());
    printf("mem puntero f: %p type=%s\n\n", &gi, gi.name());

    // out:
    // mem puntero a: 00000000004fb3c0 type=i  integer
    // mem puntero b: 00000000004fb3e0 type=l  long 
    // mem puntero c: 00000000004fb390 type=f  float 
    // mem puntero d: 00000000004f9950 type=NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE   string
    // mem puntero e: 00000000004f9950 type=NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE   string
    // mem puntero f: 00000000004f9950 type=NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE   string
    // mem puntero g: 00000000004fb390 type=b  bool

    // Judge a == b
    // A hash code is an integer value that is associated with each object
    printf("&ai == &bi(true/false) = %d\n", &ai == &bi);                         // Not guaranteed
    printf("hash_code (true/false) = %d\n\n", ai.hash_code() == bi.hash_code()); // Guaranteed

    // Judge a == c
    printf("&ai == &ci(true/false) = %d\n", &ai == &ci);                         // Not guaranteed
    printf("hash_code (true/false) = %d\n", ai.hash_code() == ci.hash_code());   // Guaranteed

    //&ai == &bi(true/false) = 0
    // hash_code (true/false) = 0

    // &ai == &ci(true/false) = 0
    // hash_code (true/false) = 0

    return 0;
}