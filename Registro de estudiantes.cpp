#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la clase Estudiante
class Estudiante {
private:
    string nombre; // Atributo privado para el nombre del estudiante
    string apellido; // Atributo privado para el apellido del estudiante
    int edad; // Atributo privado para la edad del estudiante
    string curso; // Atributo privado para el curso del estudiante

public:
    // Constructor para inicializar los atributos del estudiante
    Estudiante(string nombre, string apellido, int edad, string curso)
        : nombre(nombre), apellido(apellido), edad(edad), curso(curso) {}

    // Métodos para establecer los datos del estudiante
    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    void setApellido(string apellido) {
        this->apellido = apellido;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    void setCurso(string curso) {
        this->curso = curso;
    }

    // Métodos para obtener los datos del estudiante
    string getNombre() const {
        return nombre;
    }

    string getApellido() const {
        return apellido;
    }

    int getEdad() const {
        return edad;
    }

    string getCurso() const {
        return curso;
    }

    // Método para mostrar la información del estudiante
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Curso: " << curso << endl;
    }
};

int main() {
	// Creación de un vector para almacenar objetos Estudiante
    vector<Estudiante> registroEstudiantes;
    char opcion;

	 // Bucle para ingresar datos de estudiantes hasta que el usuario decida no continuar
    do {
    	system("cls");
        string nombre, apellido, curso;
        int edad;
		system("color 8e");
        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombre;
        cout << "Ingrese el apellido del estudiante: ";
        cin >> apellido;
        cout << "Ingrese la edad del estudiante: ";
        cin >> edad;
        cout << "Ingrese el curso del estudiante: ";
        cin >> curso;

		// Creación de un objeto Estudiante y agregarlo al vector
        Estudiante estudiante(nombre, apellido, edad, curso);
        registroEstudiantes.push_back(estudiante);
        
		// Pregunta al usuario si desea agregar otro estudiante
        cout << "¿Desea agregar otro estudiante? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    // Opción para buscar un estudiante
    system("cls");
    cout << "Ingrese el nombre del estudiante que desea buscar: ";
    string nombreBuscado;
    cin >> nombreBuscado;
    for (const auto& estudiante : registroEstudiantes) {
        if (estudiante.getNombre() == nombreBuscado) {
            cout << "Estudiante encontrado:\n";
            estudiante.mostrarInformacion();
            break;
        }
    }

    return 0;
}
