#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<string> canciones;
void menu(queue<string> &canciones);

void agregarLista(queue<string> &canciones){
    
    int eleccion;
    string cancion;
    cin.ignore();
    cout << "Cancion a agregar a la lista: " << endl;
    getline(cin, cancion);
    canciones.push(cancion);
    cout << "Desea agregar otra Cancion (si(1)/no(2))" <<endl;
    cin >> eleccion;
    if(eleccion == 1){
        agregarLista(canciones);
    }else{
        menu(canciones);
    }
    
}

void MostarLista(queue<string> &canciones){
    
    int decision;
    if (canciones.empty()) {
        cout << "La lista está vacía." << endl;
        return;
    }

    cout << "Canciones en la lista de reproducion:" << endl;
    queue<string> copiaLista = canciones; 
    while (!copiaLista.empty()) {
        cout << copiaLista.front() << endl;
        copiaLista.pop();
    }
    cout << "Volver al Menu (si(1)no(2))" << endl;
    cin >> decision;
    if(decision == 1){
        menu(canciones);
    }
}


void menu(queue<string> &canciones){
    
    int option;
    
    cout << "//-------Menu---------/" << endl;
    cout << "1. Agregar cancion a la lista" << endl;
    cout << "2. Mostar lista de reproducion" << endl;
    cout << "3. Salir" << endl;
    cin >> option ;
    if (option == 1){
        agregarLista(canciones);
    }else if (option == 2){
        MostarLista(canciones);
    }else{
        return;
    }
}

int main(){
    
    menu(canciones);
    return 0;
}