#include <iostream>
#include <stack>
#include <string>
#include <limits> 

using namespace std;

struct Pelicula {
    string nombre;
    int numEstrellas;
};

int main() {
    stack<Pelicula> pilaPeliculas;

    for (int i = 0; i < 3; i++) {
        Pelicula nuevaPelicula;
        cout << "Ingresa el nombre de la película " << (i + 1) << ": ";
        getline(cin, nuevaPelicula.nombre);
        cout << "Ingresa el número de estrellas para la película " << (i + 1) << ": ";
        cin >> nuevaPelicula.numEstrellas;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        pilaPeliculas.push(nuevaPelicula);
    }

    cout << "\nPelículas en la pila:\n";
    while (!pilaPeliculas.empty()) {
        Pelicula peliculaCima = pilaPeliculas.top();
        cout << "Nombre: " << peliculaCima.nombre << "\n";
        cout << "Número de estrellas: " << peliculaCima.numEstrellas << "\n\n";
        pilaPeliculas.pop();
    }

    return 0;
}
