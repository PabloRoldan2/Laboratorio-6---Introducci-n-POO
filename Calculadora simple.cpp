#include <iostream>
using namespace std;

// Definición de la clase Calculadora
class Calculadora {
private:
    float num1, num2; // Atributos privados para almacenar los dos números

public:
    // Método para ingresar los números
    void ingresarNumeros() {
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
    }

    // Método para sumar
    float sumar() {
        return num1 + num2;
    }

    // Método para restar
    float restar() {
        return num1 - num2;
    }

    // Método para multiplicar
    float multiplicar() {
        return num1 * num2;
    }

    // Método para dividir
    float dividir() {
        if (num2 == 0) {
            cout << "Error: División por cero." << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main() {
	// Creación de un objeto de la clase Calculadora
    Calculadora calc;
    int opcion;

	 // Bucle para mostrar el menú y realizar operaciones hasta que el usuario decida salir
    do {
    	system("cls");
    	system("color 8e");
    	cout << "------Calculadora-------" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir" << endl;
        cout << "------------------------" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
		system("cls");
        switch (opcion) {
            case 1:
                calc.ingresarNumeros();
                cout << "La suma es: " << calc.sumar() << endl;
                break;
            case 2:
                calc.ingresarNumeros();
                cout << "La resta es: " << calc.restar() << endl;
                break;
            case 3:
                calc.ingresarNumeros();
                cout << "El resultado es: " << calc.multiplicar() << endl;
                break;
            case 4:
                calc.ingresarNumeros();
                cout << "La division es: " << calc.dividir() << endl;
                break;
            case 5:
                cout << "Saliendo del programa;" << endl;
                break;
            default:
                cout << "Opcion invalida.\n";
                break;
        }
        system("pause");
    } while (opcion != 5);

    return 0;
}
