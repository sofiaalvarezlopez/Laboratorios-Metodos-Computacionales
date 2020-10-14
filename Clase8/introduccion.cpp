#include <iostream>
using namespace std;

int suma(int &x, int &y){
    return x + y;
}

string unir(string &x, string &y){
    return x + y;
}

int main(){
    //sumar enteros
    int a = 5;
    int b = 8;
    cout << "Suma enteros: " << suma(a, b) << endl;

    //sumar strings
    string d = "Hola ";
    string e = "a todos";
    cout << "Concatenación strings: " << unir(d,e) << endl;

    
}