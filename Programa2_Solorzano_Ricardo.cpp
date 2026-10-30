#include <iostream>
using namespace std;

int DeterminarFigura(double a, double b, double c);
const char* NombreFigura(int figura);
double CalcularArea(int figura, double a, double b, double c);
double RaizCuadrada(double x);

int main() {

    double a, b, c, area;
    int opcion, figura;

    a = 0;
    b = 0;
    c = 0;
    figura = 0;

    do {
        cout << "========== MENU ==========" << endl;
        cout << "1. Determine figura" << endl;
        cout << "2. Calcule area" << endl;
        cout << "3. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1:
                cout << "Ingrese 3 valores: ";
                cin >> a >> b >> c;

                if (a < 0 || b < 0 || c < 0) {
                    figura = 0;
                    cout << "Los valores no pueden ser negativos" << endl;
                } else {
                    figura = DeterminarFigura(a, b, c);
                    if (figura == 0) {
                        cout << "Los valores no indican figura" << endl;
                    } else {
                        cout << "La figura es un " << NombreFigura(figura) << endl;
                    }
                }
                break;

            case 2:
                if (figura == 0) {
                    cout << "Primero debera determinar la figura en la opcion 1" << endl;
                } else {
                    area = CalcularArea(figura, a, b, c);
                    cout << "El area del " << NombreFigura(figura) << " es: " << area << endl;
                }
                break;

            case 3:
                cout << "Hasta la proxima" << endl;
                break;

            default:
                cout << "Opcion no valida, intente de nuevo" << endl;
        }

    } while (opcion != 3);

    return 0;
}

int DeterminarFigura(double a, double b, double c) {
    int figura = 0;

    if (a > 0 && b == 0 && c == 0) {
        figura = 1;
    } else {
        if (a > 0 && b > 0 && c == 0) {
            if (a == b) {
                figura = 2;
            } else {
                figura = 3;
            }
        } else {
            if (a > 0 && b > 0 && c > 0) {
                if ((a + b > c) && (a + c > b) && (b + c > a)) {
                    if (a == b && b == c) {
                        figura = 4;
                    } else {
                        if (a == b || a == c || b == c) {
                            figura = 5;
                        } else {
                            figura = 6;
                        }
                    }
                }
            }
        }
    }
    return figura;
}

const char* NombreFigura(int figura) {
    const char* nombre;

    switch (figura) {
        case 1: nombre = "circulo"; break;
        case 2: nombre = "cuadrado"; break;
        case 3: nombre = "rectangulo"; break;
        case 4: nombre = "triangulo equilatero"; break;
        case 5: nombre = "triangulo isosceles"; break;
        case 6: nombre = "triangulo escaleno"; break;
        default: nombre = "ninguna";
    }
    return nombre;
}

double CalcularArea(int figura, double a, double b, double c) {
    double area = 0;
    double s;

    switch (figura) {
        case 1: area = 3.1416 * a * a; break;
        case 2: area = a * a; break;
        case 3: area = a * b; break;
        case 4:
        case 5:
        case 6:
            s = (a + b + c) / 2;
            area = RaizCuadrada(s * (s - a) * (s - b) * (s - c));
            break;
    }
    return area;
}

double RaizCuadrada(double x) {
    double r;

    if (x <= 0) {
        r = 0;
    } else {
        r = x;
        for (int i = 1; i <= 50; i++) {
            r = (r + x / r) / 2;
        }
    }
    return r;
}