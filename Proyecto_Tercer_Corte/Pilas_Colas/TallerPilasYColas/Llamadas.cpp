#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct Llamada {
    string nombre;
    long long int numTelefonico;
};

stack<Llamada> LlamadasRecientes;
void menu(stack<Llamada> &LlamadasRecientes);

void agregarLista(stack<Llamada> &LlamadasRecientes){
    
    Llamada nuevallamada;
    int eleccion;
    cout << "Nombre del conctacto que desea llamar " << endl;
    cin >> nuevallamada.nombre;
    cout << "Numero del conctacto que desea llamar " << endl;
    cin >> nuevallamada.numTelefonico;
    LlamadasRecientes.push(nuevallamada);
    cout << "Desea hacer otra llamada (si(1)/no(2))" << endl;
    cin >> eleccion;
    if(eleccion == 1){
        agregarLista(LlamadasRecientes);
    }else{
        menu(LlamadasRecientes);
    }
    
}

void MostarLista(stack<Llamada> &LlamadasRecientes){
    
    int decision;
    if (LlamadasRecientes.empty()) {
        cout << "La lista está vacía." << endl;
        return;
    }
    
    cout << "Lista Llamadas Recientes: " << endl;
    stack<Llamada> copiaLista = LlamadasRecientes; 
    while (!copiaLista.empty()) {
        Llamada llamadaCima =copiaLista.top();
        cout << "Nombre del conctacto: " << llamadaCima.nombre << endl;
        cout << "Numero del conctacto: " << llamadaCima.numTelefonico << endl << "\n";
        copiaLista.pop();
    }
    cout << "Volver al menu (si(1)no(2))" << endl;
    cin >> decision;
    if(decision == 1){
        menu(LlamadasRecientes);
    }
}


void menu(stack<Llamada> &LlamadasRecientes){
    
    int option;
    
    cout << "//-------Menu---------/" << endl;
    cout << "1. Hacer Llamada" << endl;
    cout << "2. Mostar Llamadas Recientes" << endl;
    cout << "3. Salir" << endl;
    cin >> option ;
    if (option == 1){
        agregarLista(LlamadasRecientes);
    }else if (option == 2){
        MostarLista(LlamadasRecientes);
    }else{
        return;
    }
}

int main(){
    
    menu(LlamadasRecientes);
    return 0;
}