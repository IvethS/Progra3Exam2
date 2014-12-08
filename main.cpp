#include "Lista.h"
#include "ArbolTrinario.h"
#include "Evaluador.h"
#include <fstream>
#include <list>
#include <vector>
#include <math.h>
using namespace std;

//2 ejercicios a realizar estan ubicados en el archivo Lista.h

//Devuelve el promedio de los valres de mi_lista dada
float obtenerPromedio(std::list<float> mi_lista)
{
   return -1.0f;

}

//Devuelve la suma de los valres de mi_vector dada
int obtenerSuma(std::vector<int> mi_vector)
{
  return -1;
}

//Devuelve verdadero si encuentra cadena (dada) en el archivo con nombre nombre_archivo (dado), de lo contrario devuelve false
bool existeEnArchivo(string nombre_archivo, string cadena)
{
      ifstream in(nombre_archivo.c_str());
    string palabra;
    int cant=nombre_archivo.size();

    for(int i=0;i < cant;i++)
    {
        in>>palabra;
        if(palabra == cadena)
        {
            return true;
        }
    }
    return false;
}








//Devuelve devuelve el tamano en bytes del archivo con nombre nombre_archivo (dado)
int obtenerTamanoDeArchivo(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());
    in.seekg(0,ios::end);
    int tam = in.tellg();
    in.seekg(0,ios::beg);

    return tam;
}

//Devuelve true si encuentra el valor num (dado) en el arbol dada su raiz
bool existeEnArbol(NodoTrinario* raiz, int num)
{
    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
