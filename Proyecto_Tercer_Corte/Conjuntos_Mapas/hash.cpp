#include <iostream>
#include <string>
using namespace std;

unsigned int Simplehash(const string& input){
    unsigned int hash = 0;
    for(char c : input){
        hash += static_cast<unsigned int>(c);
    }
  return hash;    
}


int main()
{
    // string input = "Hola, mundo!";
    string input = "Programar es algo cool!"; // Ejercicio de tarea
    
    unsigned int hashValue = Simplehash(input);
    
    cout << "Datos de entrada: " << input << endl;
    cout << "Valor hash: " << hashValue << endl;
    return 0;
}
