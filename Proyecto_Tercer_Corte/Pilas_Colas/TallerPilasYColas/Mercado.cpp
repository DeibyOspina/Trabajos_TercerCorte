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

void eliminarItem(queue<string> &listaMercado){

    int decision;
    if (listaMercado.empty()) {
        cout << "La lista esta vacia." << endl;
        return;
    }else{
    cout << "Item eliminado: " << endl;
    cout << listaMercado.front() << endl;
    listaMercado.pop();
    cout << "//--------Menu----------//" << endl;
    cout << "1. Eliminar otro item " << endl;
    cout << "2. Volver al menu " << endl;
    cout << "3. Salir " << endl;
    cin >> decision;
    if(decision == 1){
        eliminarItem(listaMercado);
    }
    else if(decision == 2){
        menu(listaMercado);
    }else{
        return;
    }
    }
}

void menu(queue<string> &listaMercado){
    
    int option;
    
    cout << "//------------Menu------------//" << endl;
    cout << "1. Agregar producto a la lista" << endl;
    cout << "2. Mostar lista" << endl;
    cout << "3. Tachar elemento de la lista" << endl;
    cout << "4. Salir" << endl;
    cin >> option ;
    if (option == 1){
        agregarLista(listaMercado);
    }else if (option == 2){
        MostarLista(listaMercado);
    }else if(option == 3){
         eliminarItem(listaMercado);
    }else{
        return;
    }
}

int main(){
    
    menu(listaMercado);
    return 0;
}
