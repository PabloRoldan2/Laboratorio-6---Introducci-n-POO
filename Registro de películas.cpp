#include <iostream>
#include <string>

using namespace std;

// Definici�n de la clase Pelicula
class Pelicula {
private:
    string titulo; // Atributo privado para el t�tulo de la pel�cula
    string director; // Atributo privado para el director de la pel�cula
    int anioLanzamiento; // Atributo privado para el a�o de lanzamiento de la pel�cula

public:
    void setTitulo(const string& t) { titulo = t; } // M�todo para establecer el t�tulo de la pel�cula
    string getTitulo() const { return titulo; } // M�todo para obtener el t�tulo de la pel�cula
    void setDirector(const string& d) { director = d; } // M�todo para establecer el director de la pel�cula
    string getDirector() const { return director; }  // M�todo para obtener el director de la pel�cula
    void setAnioLanzamiento(int y) { anioLanzamiento = y; } // M�todo para establecer el a�o de lanzamiento de la pel�cula
    int getAnioLanzamiento() const { return anioLanzamiento; } // M�todo para obtener el a�o de lanzamiento de la pel�cula
    void mostrarInfo() const { // M�todo para mostrar la informaci�n de la pel�cula
        cout << "Titulo: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Anio de Lanzamiento: " << anioLanzamiento << endl;
    }
};

int main() {
	// Creaci�n de un array de objetos Pelicula
    Pelicula peliculas[5];

    // Establecer datos para cada pelicula
    peliculas[0].setTitulo("Avatar");
    peliculas[0].setDirector("James Cameron");
    peliculas[0].setAnioLanzamiento(2009);

    peliculas[1].setTitulo("Vengadores: Endgame");
    peliculas[1].setDirector(" Anthony Russo, Joe Russo");
    peliculas[1].setAnioLanzamiento(2019);
    
    peliculas[2].setTitulo("Titanic");
    peliculas[2].setDirector("James Cameron");
    peliculas[2].setAnioLanzamiento(1997);
    
    peliculas[3].setTitulo("Jurassic World");
    peliculas[3].setDirector("Colin Trevorrow");
    peliculas[3].setAnioLanzamiento(2015);
    
    peliculas[4].setTitulo("Star Wars: Episodio VII - El despertar de la Fuerza");
    peliculas[4].setDirector("J.J. Abrams");
    peliculas[4].setAnioLanzamiento(2015);

	// Presentaci�n de la lista de pel�culas al usuario
    cout << "---------------------------------------" << endl;
    cout << "1. Avatar" << endl;
    cout << "2. Vengadores: Endgame" << endl;
    cout << "3. Titanic" << endl;
    cout << "4. Jurassic World" << endl;
    cout << "5. Star Wars: Episodio VII - El despertar de la Fuerza" << endl;
    cout << "---------------------------------------" << endl;
    
    // Solicitar al usuario que elija una pelicula
    int eleccion;
    system("color 8e");
    cout << "Elija una pelicula (1-5): ";
    cin >> eleccion;

    // Verificar que la elecci�n est� dentro del rango
    if (eleccion < 1 || eleccion > 5) {
        cout << "Eleccion no valida." << endl;
    } else {
        // Mostrar la informaci�n de la pelicula seleccionada
        system("cls");
        cout << "Pelicula seleccionada:" << endl;
        peliculas[eleccion - 1].mostrarInfo();
    }

    return 0;
}

