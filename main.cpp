#include <iostream>
#include "arreglo.h"

using namespace std;

int main(){

    Arreglo <string> arr;
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
    
    return 0;
}