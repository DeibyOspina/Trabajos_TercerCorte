#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<string> listaMercado;
void menu(queue<string> &listaMercado);

void agregarLista(queue<string> &listaMercado){
    
    int eleccion;
    string item;
    cout << "Que producto desea agregar a la lista: " << endl;
    cin >> item;
    listaMercado.push(item);
    cout << "Desea agregar otro item (si(1)/no(2))" <<endl;
    cin >> eleccion;
    if(eleccion == 1){
        agregarLista(listaMercado);
    }else{
        menu(listaMercado);
    }
    
}

void MostarLista(queue<string> &listaMercado){
    
    int decision;
    if (listaMercado.empty()) {
        cout << "La lista está vacía." << endl;
        return;
    }

    cout << "Lista de productos:" << endl;
    queue<string> copiaLista = listaMercado; 
    while (!copiaLista.empty()) {
        cout << copiaLista.front() << endl;
        copiaLista.pop();
    }
    cout << "Volver al menu (si(1)no(2))" << endl;
    cin >> decision;
    if(decision == 1){
        menu(listaMercado);
    }
}


void menu(queue<string> &listaMercado){
    
    int option;
    
    cout << "//-------Menu---------/" << endl;
    cout << "1. Agregar producto a la lista" << endl;
    cout << "2. Mostar lista" << endl;
    cout << "3. Salir" << endl;
    cin >> option ;
    if (option == 1){
        agregarLista(listaMercado);
    }else if (option == 2){
        MostarLista(listaMercado);
    }else{
        return;
    }
}

int main(){
    
    menu(listaMercado);
    return 0;
}