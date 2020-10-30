#include <iostream>
#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main(){

    Arreglo <Computadora> computadoras;
    Computadora c1("Windows 10","i7 10700", "16 Gb", "GTX 1070");
    Computadora c2("Ubuntu","i5 9600K", "16 Gb", "RTX 2060");
    Computadora c3("Windows 8","i7 10700", "12 Gb", "RTX 2080 TI");
    Computadora c4("Windows 7","i3 8100", "8 Gb", "RX 580");
    Computadora c5("Debian","i7 10700", "64 Gb", "RTX 3080");

    computadoras << c1 <<c2 << c3 << c4 << c5;
    Computadora aux("","i7 10700","","");
    Computadora aux2("","i7 4770","","");

    Computadora *ptr = computadoras.busqueda_lineal(aux);

    cout<<"Funcion busqueda lineal:"<<endl;

    if(ptr != nullptr)
        cout<< *ptr<<endl;
    else
        cout<<"No se ha el elemento con el procesaor "<<ptr->getCpu()<<endl;

    ptr = computadoras.busqueda_lineal(aux2);
    cout<<"Funcion busqueda lineal:"<<endl;

    if(ptr != nullptr)
        cout<< *ptr<<endl;
    else
        cout<<"No se ha el elemento con el procesaor "<< aux2.getCpu() <<endl;

    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(aux);
    cout<<endl<<"Buscar todos los elementos con el procesador i7 10700"<<endl;
    

    if(ptrs.size()>0 ){
        cout<<"Se han encontrado los siguiente elementos..."<<endl;
        for(int i = 0; i< ptrs.size();i++){
            Computadora *c = ptrs[i];
            cout<< *c;
        }

    }
    else
        cout<<"No se encontro ningun elemento";
    
    
    

    /*Arreglo <string> arr;
    arr.insertar_final("sobre");
    arr.insertar_final("plantillas");
    arr.insertar_inicio("13");
    arr.insertar_inicio("Actividad");
    
    cout<<"Insertar al final e insertar al inicio: "<<endl;
    for(int i=0;i<arr.size();i++)
        cout<< arr[i] << " ";
    
    arr.insertar("Diego",2);

    cout<<endl<<endl<<"Insertando un elemento en la posicion 2:"<<endl;
    for(int i=0;i<arr.size();i++)
        cout<< arr[i] << " ";

    arr.eliminar(1);
    arr.eliminar_final();
    arr.eliminar_inicio();
    
    cout<<endl<<endl<<"Eliminar la posicion 1, el inicio y el final del arreglo"<<endl;
    for(int i=0;i<arr.size();i++)
        cout<< arr[i] << " ";

    string *x = arr.busqueda_lineal("Diego");
    cout<<endl<<x <<" "<<*x; */
    
    return 0;
}