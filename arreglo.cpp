#include "arreglo.h"

using namespace std;

Arreglo::Arreglo(){
    count = 0;
    tam = MAX;
    arreglo = new string[tam];
}

Arreglo::~Arreglo(){
    delete[] arreglo;
}

void Arreglo::expandir(){
    string *nuevo;
    nuevo = new string[tam + MAX];

    for(int i = 0; i< count;i++)
        nuevo[i] = arreglo[i];

    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;

}

void Arreglo::insertar_inicio(const string &s){
    if(count == tam)
        expandir();
    
    int i;

    for(i= count; i>0;i--)
        arreglo[i] = arreglo[i-1];

    arreglo[i] = s;
    count++;
}

void Arreglo::insertar_final(const string &s){
    if(count == tam)
        expandir();

    arreglo[count++] = s;
}

int Arreglo::size(){
    return count;
}

string Arreglo::operator[](const int &i){
    return arreglo[i];
}