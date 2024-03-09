#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definici�n de la clase CuentaBancaria
class CuentaBancaria {
private:
    string titular; // Nombre del titular de la cuenta
    string numeroCuenta; // N�mero de cuenta
    double saldo; // Saldo actual de la cuenta

public:
    // Constructor para inicializar los atributos de la cuenta
    CuentaBancaria(const string& titular, const string& numeroCuenta, double saldoInicial)
        : titular(titular), numeroCuenta(numeroCuenta), saldo(saldoInicial) {}

    // M�todos p�blicos
    void depositar(double cantidad);
    void retirar(double cantidad);
    double consultarSaldo() const;
    string getTitular() const; // M�todo para obtener el titular de la cuenta
};

// M�todo para depositar dinero en la cuenta
void CuentaBancaria::depositar(double cantidad) {
    if (cantidad > 0) {
        saldo += cantidad;
        cout << "Dep�sito realizado. Nuevo saldo: " << saldo << endl;
    } else {
        cout << "Cantidad de dep�sito inv�lida." << endl;
    }
}

// M�todo para retirar dinero de la cuenta
void CuentaBancaria::retirar(double cantidad) {
    if (cantidad > 0 && cantidad <= saldo) {
        saldo -= cantidad;
        cout << "Retiro realizado. Nuevo saldo: " << saldo << endl;
    } else {
        cout << "Cantidad de retiro inv�lida o insuficiente saldo." << endl;
    }
}

// M�todo para consultar el saldo de la cuenta
double CuentaBancaria::consultarSaldo() const {
    return saldo;
}

// M�todo para obtener el titular de la cuenta
string CuentaBancaria::getTitular() const {
    return titular;
}

// Vector global para almacenar objetos CuentaBancaria
vector<CuentaBancaria> cuentas;

// Funci�n para buscar una cuenta por nombre
CuentaBancaria* buscarCuenta(const string& nombreTitular) {
    for (auto& cuenta : cuentas) {
        if (cuenta.getTitular() == nombreTitular) {
            return &cuenta;
        }
    }
    return nullptr; // Retorna nullptr si no se encuentra la cuenta
}

int main() {
    // Cuentas registradas
    cuentas.push_back(CuentaBancaria("Juan_Perez", "1234567890", 1000.00));
    cuentas.push_back(CuentaBancaria("Ana_Sanchez", "0987654321", 2000.00));
    cuentas.push_back(CuentaBancaria("Karla_Ramirez", "3273838438", 1500.00));
    cuentas.push_back(CuentaBancaria("Carlos_Roldan", "8965470310", 3000.00));

    string nombreTitular;
    system("color 8e");
    cout << "-----------------" << endl;
    cout << "1. Juan_Perez" << endl;
    cout << "2. Ana_Sanchez" << endl;
    cout << "3. Karla_Ramirez" << endl;
    cout << "4. Carlos_Roldan" << endl;
    cout << "-----------------" << endl;
    cout << "Ingrese el nombre del titular de la cuenta: ";
    cin >> nombreTitular;

    CuentaBancaria* cuentaBuscada = buscarCuenta(nombreTitular);
    if (cuentaBuscada != nullptr) {
        int opcion;
        do {
        	system("cls");
            cout << "\n1. Depositar\n2. Retirar\n3. Consultar saldo\n4. Salir\n";
            cout << "Seleccione una opcion: ";
            cin >> opcion;

            switch (opcion) {
                case 1: {
                    double cantidadDepositar;
                    cout << "Ingrese la cantidad a depositar: ";
                    cin >> cantidadDepositar;
                    cuentaBuscada->depositar(cantidadDepositar);
                    break;
                }
                case 2: {
                    double cantidadRetirar;
                    cout << "Ingrese la cantidad a retirar: ";
                    cin >> cantidadRetirar;
                    cuentaBuscada->retirar(cantidadRetirar);
                    break;
                }
                case 3: {
                    cout << "Saldo actual: " << cuentaBuscada->consultarSaldo() << endl;
                    break;
                }
                case 4: {
                    cout << "Saliendo del programa..." << endl;
                    break;
                }
                default: {
                    cout << "Opcion inv�lida. Intente de nuevo." << endl;
                    break;
                }
            }
            system("pause");
        } while (opcion != 4);
    } else {
        cout << "Cuenta no encontrada." << endl;
    }

    return 0;
}
