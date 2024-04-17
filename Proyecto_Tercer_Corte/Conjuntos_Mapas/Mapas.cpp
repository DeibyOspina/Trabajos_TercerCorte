#include<iostream>
#include<map>
using namespace std;

int main() {

//Crear mapa
map<int , string> frutas;
// elementos 
frutas[1] = "arandanos"
frutas[2] = "uvas"
frutas[3] = "sandia"
frutas[4] = "cerezas"

// ------------------------------------------------------

/* Metodos
- insert() : Agregar un elemento al conjunto  
- erase() :  eliminar un elemento del conjunto 
- find() : Buscar un elemento del conjunto
- entre otros xd
*/

// Imprimir mapa 
for(const auto& par : frutas){

    int clave = par.first();
    string valor  = par.second();
    cout << "clave" << clave << "Valor" << valor << endl;
}

//-----------------------------------------------------------------------
//Busar en el mapa

string name = "cerezas";
auto it = frutas.find(name);

if(iterador != it.end()){

  cout << "Se encontro el elemento en el conjunto" << endl;

}else{
  
  cout << "No se encontro el elemento en el conjunto" << endl;

}

// ---------------------------------------------------------------------
//Eliminar del mapa 

string fruit = "uvas";
frutas.erase(fruit);

// ---------------------------------------------------------------------
//Operaciones Avanzadas

//Unir mapas
map<int ,string >mapa1;
map<int, string >mapa2;

mapa1.insert(mapa2.begin(),mapa2.end())

// 

return 0;

}