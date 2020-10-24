#include <iostream>
#include "arreglo.h"

using namespace std;

int main(){

    Arreglo arr;
    arr.insertar_final("una");
    arr.insertar_final("prueba");
    arr.insertar_final("para");
    arr.insertar_final("la");
    arr.insertar_final("actividad 12");
    arr.insertar_final("sobre");
    arr.insertar_final("arreglos");
    arr.insertar_final("dinamicos");

    cout<<"8 strings al final:"<<endl;
    for(int i=0;i<arr.size();i++)
        cout<< arr[i] << " ";
    
    cout<<endl<<endl<<"8 strings al final mas 2 al inicio:"<<endl;
    arr.insertar_inicio("es");
    arr.insertar_inicio("Esto");

    for(int i=0;i<arr.size();i++)
        cout<< arr[i] << " ";

    
    return 0;
}