#include <iostream>
using namespace std;

int main(){

int base, altura;

cout << "Ingrese el valor de base" << endl;
cin >> base;

cout << "Ingrese el valor de altura" << endl;
cin >> altura;

int area = base * altura;

if (base = altura){
    cout << "El area es " << area << " y es un cuadrado";
}else{
    cout << "El area del rectangulo es "<< area << endl;
}

return 0;
}
