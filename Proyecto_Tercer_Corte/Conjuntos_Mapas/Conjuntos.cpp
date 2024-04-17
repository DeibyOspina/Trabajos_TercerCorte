#include<iostream>
#include<set>
using namespace std;

/* Operaciones
- insert() : Agregar un elemento al conjunto  
- erase() :  eliminar un elemento del conjunto 
- find() : Buscar un elemento del conjunto
- clean()
- add() 
*/

int main() {

// ------------------------------------------------------

//conjunto 
set<string> Frutas;
// Elementos del conjunto
frutas.insert("Arandanos");
frutas.insert("Uvas");
frutas.insert("Sandia");
frutas.insert("Cerezas");

//Mostar conjunto 

for(const string& frutas : frutas){

    cout << frutas << endl ;
    }

frutas.insert("Mango"); //Inserta Nuevo elemento

//Mostar conjunto 

for(const string& frutas : frutas){

    cout << frutas << endl ;
    }

frutas.erase("Cerezas"); //Eliminar elemento

for(const string& frutas : frutas){

    cout << frutas << endl ;
    }

//--------------------------------------------------------------------------

//Buscar elementos

string buscar = "Arandanos";
string buscar2 = "Cerezas"
auto iterador = frutas.find(buscar);
auto iterador2 = frutas.find(buscar);

//Verificar si existe
if(iterador != fruas.end()){

  cout << "Se encontro el elemento en el conjunto" << endl;

}else{
  
  cout << "No se encontro el elemento en el conjunto" << endl;

}

if(iterador2 != fruas.end()){

  cout << "Se encontro el elemento en el conjunto" << endl;

}else{
  
  cout << "No se encontro el elemento en el conjunto" << endl;

}

// ------------------------------------------------------------------------

fritas.size(); // tamaño conjunto
frutas.end(); // ver el final del conjunto
frutas.clear(); // Limpiar conjunto
frutas.empty(); // Vaciar conjunto

// ------------------------------------------------------------------------
//Ejercicio 

//conjunto 
set<string> canciones;

canciones,insert("Una bala");
canciones,insert("Flechazo en el centro");
canciones,insert("3 AM");
//Mostar conjunto 
for(const string& canciones : canciones){

    cout << canciones << endl ;
    }
//Inserta Nueva cancion
canciones,insert("Mai");

//Mostar conjunto
for(const string& canciones : canciones){

    cout << canciones << endl ;
    }

// Eliminar canciones

canciones.erase(" 3 AM");
canciones.erase(" Una bala");

// Mostar conjunto
for(const string& canciones : canciones){

    cout << canciones << endl ;
    }

//Busxar cancion

String Buscar_Cancion = "Flechazo en el centro";
auto iterador3 = canciones.find(Buscar_Cancion);

if(iterador != canciones.end()){

  cout << "Se encontro el elemento en el conjunto" << endl;

}else{
  
  cout << "No se encontro el elemento en el conjunto" << endl;

}

// --------------------------------------------------------------------------
//Operaciones avanzadas

set<int> A = [1, 2,3,4,5];
set<int> B = [3,4,5,6,7];

//intercepcion 
set <int> intercepcion;

for(int elemento : A){

    if(B.count(elemento)){
        intercepcion.insert(elemento);
    }
    cout << elemento << "";
}
for (int elemento : intercepcion ){

    cout << elemento << "";
}

// --------------------------------------------------
// Union

set<int> union = A;

union.insert(B.begin(),B.end())
cout << " Union: ";
for(int elemento : union ){
    cout << elemento << "";
}

// ---------------------------------------------------
// Diferencia

set<int> diferencia ;
set_difference(A.begin(),A.end(),B.begin(),B.end(), inserter(diferencia.begin()));

for( auto it = diferencia.begin() ,it != diferencia.end() , ++it){
    cout << it << "";
}

return 0; 

}