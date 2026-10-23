#include <iostream>
using namespace std;

int main(){

    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Ingrese 3 valores " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a < 0, b < 0, c < 0){
        cout << "Los valores no pueden ser negativos" << endl;
    }

    if(a > 0 && b == 0 && c == 0){
        cout << "La figura es un circulo" << endl;
    }else{
        if(a > 0 && b > 0 && c == 0){
            if(a == b){
                cout << "La figura es un cuadrado" << endl;
            }else{
                cout << "La figura es un rectangulo" << endl;
            }
        }else{
            if(a > 0 && b > 0 && c > 0){
                if((a + b + c) && (a + c > b) && (b + a > c)){
                    if(a == b && b == c){
                        cout << "La figura es un triangulo equilatero" << endl;
                    }else{
                        if(a == b || a == c || b == c){
                            cout << "La figura es un triangulo isoceles" << endl;
                        }else{
                            cout << "La figura es un triangulo escaleno" << endl;
                        }
                    }
                }else{
                        cout << "Los valores no indican figura" << endl;                 
                }
            }else{
                    cout << "Los valores no indican figura" << endl;
            }
        }
    }
    return 0;
}