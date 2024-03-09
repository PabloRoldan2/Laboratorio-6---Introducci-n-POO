#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Pelicula
class Pelicula {
private:
    string titulo; // Atributo privado para el título de la película
    string director; // Atributo privado para el director de la película
    int anioLanzamiento; // Atributo privado para el año de lanzamiento de la película

public:
    void setTitulo(const string& t) { titulo = t; } // Método para establecer el título de la película
    string getTitulo() const { return titulo; } // Método para obtener el título de la película
    void setDirector(const string& d) { director = d; } // Método para establecer el director de la película
    string getDirector() const { return director; }  // Método para obtener el director de la película
    void setAnioLanzamiento(int y) { anioLanzamiento = y; } // Método para establecer el año de lanzamiento de la película
    int getAnioLanzamiento() const { return anioLanzamiento; } // Método para obtener el año de lanzamiento de la película
    void mostrarInfo() const { // Método para mostrar la información de la película
        cout << "Titulo: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Anio de Lanzamiento: " << anioLanzamiento << endl;
    }
};

int main() {
	// Creación de un array de objetos Pelicula
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

	// Presentación de la lista de películas al usuario
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

    // Verificar que la elección esté dentro del rango
    if (eleccion < 1 || eleccion > 5) {
        cout << "Eleccion no valida." << endl;
    } else {
        // Mostrar la información de la pelicula seleccionada
        system("cls");
        cout << "Pelicula seleccionada:" << endl;
        peliculas[eleccion - 1].mostrarInfo();
    }

    return 0;
}

