#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<string> editor;
void menu(stack<string>& editor);

void agregarTexto(stack<string>& editor){
    string texto;
    cout << "Escriba el texto que desea añadir " << endl;
    getline(cin, texto);
    editor.push(texto);
    menu(editor);
}

void MostarTexto(stack<string>& editor){
    
    int decision;
    if (editor.empty()) {
        cout << "El editor esta vacio." << endl;
        return;
    }
    
    cout << "Contenido del editor: " << endl;
    stack<string> copiaLista = editor; 
    while (!copiaLista.empty()) {
        cout << copiaLista.top() << endl;
        copiaLista.pop();
    }
    cout << "Volver al menu (si(1)no(2))" << endl;
    cin >> decision;
    if(decision == 1){
        menu(editor);
    }
}

void deshacerTexto(stack<string>& editor){
    if (!editor.empty()) {
        editor.pop();
        cout << "Cambios eliminados" << endl;
    } else {
        cout << "No hay operaciones para deshacer." << endl;
    }
    menu(editor);
}

void menu(stack<string>& editor){
    
    int option;
    
    cout << "//-------Menu---------/" << endl;
    cout << "1. Añadir texto al editor" << endl;
    cout << "2. Mostar contenido del edito " << endl;
    cout << "3. Deshacer cambios" << endl;
    cout << "4. salir" << endl;
    cin >> option ;
    cin.ignore(); 
    if (option == 1){
        agregarTexto(editor);
    }else if (option == 2){
        MostarTexto(editor);
    }else if(option == 3){
        deshacerTexto(editor);
    }else{
        return;
    }
}

int main(){
    
    menu(editor);
    return 0;
}