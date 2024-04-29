#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<string> impresiones;
void menu(queue<string>& impresiones);

void agregarCola(queue<string>& impresiones){
    int option;
    string texto;
    cout << "Escriba nombre del archivo a imprimir: " << endl;
    cin >> texto;
    impresiones.push(texto);
    cout << "Desea agregar otro archivo(si(1)/no(2))" << endl;
    cin >> option;
    if(option == 1){
        agregarCola(impresiones);
    }else{
        menu(impresiones);
    }
}

void MostarCola(queue<string>& impresiones){
    
    int decision;
    if (impresiones.empty()) {
        cout << "La cola esta vacia." << endl;
        return;
    }else{
    cout << "Archivo imprimido: " << endl;
    cout << impresiones.front() << endl;
    impresiones.pop();
    queue<string>copiaLista = impresiones;
    cout << "Archivos restantes: " << endl;
    while (!copiaLista.empty()) {
        cout << copiaLista.front() << endl;
        copiaLista.pop();
    }
    cout << "Volver al menu " << endl;
    cout << "1. Continuar imprimiendo " << endl;
    cout << "2. Volver al menu " << endl;
    cout << "3. Salir " << endl;
    cin >> decision;
    if(decision == 1){
        MostarCola(impresiones);
    }
    else if(decision == 2){
        menu(impresiones);
    }else{
        return;
    }
    }
}

void menu(queue<string>& Impresiones){
    
    int option;
    
    cout << "//-------Menu---------/" << endl;
    cout << "1. Añadir Impresion " << endl;
    cout << "2. Mostar operaciones" << endl;
    cout << "3. salir" << endl;
    cin >> option ;
    cin.ignore(); 
    if (option == 1){
        agregarCola(Impresiones);
    }else if (option == 2){
        MostarCola(Impresiones);
    }else{
        return;
    }
}

int main(){
    
    menu(impresiones);
    return 0;
}