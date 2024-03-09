#include <iostream>
#include <string>

using namespace std;

// Definici�n de la clase Libro
class Libro {
private:
    string titulo; // Atributo privado para el t�tulo del libro
    string autor; // Atributo privado para el autor del libro
    int anioPublicacion; // Atributo privado para el a�o de publicaci�n del libro

public:
    void setTitulo(const string& t) { titulo = t; } // M�todo para establecer el t�tulo del libro
    string getTitulo() const { return titulo; } // M�todo para obtener el t�tulo del libro
    void setAutor(const string& a) { autor = a; } // M�todo para obtener el autor del libro
    string getAutor() const { return autor; } // M�todo para establecer el a�o de publicaci�n del libro
    void setAnioPublicacion(int y) { anioPublicacion = y; } // M�todo para obtener el a�o de publicaci�n del libro
    int getAnioPublicacion() const { return anioPublicacion; } // M�todo para mostrar la informaci�n del libro
    void mostrarInfo() const {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Anio de Publicacion: " << anioPublicacion << endl;
    }
};

int main() {
	// Creaci�n de un array de objetos Libro
    Libro libros[5];

    // Establecer datos para cada libro
    libros[0].setTitulo("Cien anios de soledad");
    libros[0].setAutor("Gabriel Garcia Marquez");
    libros[0].setAnioPublicacion(1967);

    libros[1].setTitulo("Don Quijote de la Mancha");
    libros[1].setAutor("Miguel de Cervantes");
    libros[1].setAnioPublicacion(1605);
    
    libros[2].setTitulo("El Principito");
    libros[2].setAutor("Antoine de Saint-Exupery");
    libros[2].setAnioPublicacion(1943);
    
    libros[3].setTitulo("Hamlet");
    libros[3].setAutor("William Shakespeare");
    libros[3].setAnioPublicacion(1603);
    
    libros[4].setTitulo("Alicia en el pais de las maravillas");
    libros[4].setAutor("Lewis Carroll");
    libros[4].setAnioPublicacion(1865);
    
	// Presentaci�n de la lista de libros al usuario
    cout << "---------------------------------------" << endl;
    cout << "1. Cien anios de soledad" << endl;
	cout << "2. Don Quijote de la Mancha" << endl;
	cout << "3. El Principito" << endl;
	cout << "4. Hamlet" << endl;
	cout << "5. Alicia en el pais de las maravillas" << endl;
	cout << "---------------------------------------" << endl;
	
    // Solicitar al usuario que elija un libro
    int eleccion;
    system("color 8e");
    cout << "Elija un libro (1-5): ";
    cin >> eleccion;

    // Verificar que la elecci�n est� dentro del rango
    if (eleccion < 1 || eleccion > 5) {
        cout << "Eleccion no valida." << endl;
    } else {
        // Mostrar la informaci�n del libro seleccionado
        system("cls");
        cout << "Libro seleccionado:" << endl;
        libros[eleccion - 1].mostrarInfo();
    }

    return 0;
}

