#ifndef ARREGLO_H_INCLUDED
#define ARREGLO_H_INCLDUDED

#include <iostream>
#include <string>

template<class T>
class Arreglo{
    private:
        T *arreglo;
        int tam;
        int count;
        const static int MAX = 5;

        void expandir();
    
    public:
        Arreglo();
        ~Arreglo();
        void insertar_final(const T&);
        void insertar_inicio(const T&);
        void insertar(const T&, const int&);

        void eliminar_inicio();
        void eliminar_final();
        void eliminar(const int &);

        T* busqueda_lineal(const T&);
        Arreglo<T*> buscar_todos(const  T&);

        int size();

        T operator[](const int&);
        friend Arreglo<T>& operator <<(Arreglo<T> &a,const T&e){
            a.insertar_final(e);
            return a;
        };
    
};

//Implementacion 

using namespace std;

template<class T>
Arreglo<T>::Arreglo(){
    count = 0;
    tam = MAX;
    arreglo = new T[tam];
}

template<class T>
Arreglo<T>::~Arreglo(){
    delete[] arreglo;
}

template<class T>
void Arreglo<T>::expandir(){
    T *nuevo;
    nuevo = new T[tam + MAX];

    for(int i = 0; i< count;i++)
        nuevo[i] = arreglo[i];

    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;

}

template<class T>
void Arreglo<T>::insertar_inicio(const T &t){
    if(count == tam)
        expandir();
    
    int i;

    for(i= count; i>0;i--)
        arreglo[i] = arreglo[i-1];

    arreglo[i] = t;
    count++;
}

template<class T>
void Arreglo<T>::insertar_final(const T &e){
    if(count == tam)
        expandir();

    arreglo[count++] = e;
}

template<class T>
void Arreglo<T>::insertar(const T& e, const int &x){

    if(x<=count){
        if(count == tam)
            expandir();
        
        for(int i=count; i> x; i--)
            arreglo[i] = arreglo[i-1];

        arreglo[x] = e;
        count++;

        }
    else{
        cout<<endl<<"Posicion no valida"<<endl;
        return;
        }
    
}

template<class T>
void Arreglo<T>::eliminar_final(){
    if(count == 0){
        cout<<endl<<"La lista se encuentra vacia"<<endl;
        return;
    }

    count--;
}


template<class T>
void Arreglo<T>::eliminar_inicio(){
    
    if(count == 0){
        cout<<endl<<"La lista se encuentra vacia"<<endl;
        return;
    }

    count--;

    for(int i=0; i<count;i++)
        arreglo[i] = arreglo[i+1];
    
}

template<class T>
void Arreglo<T>::eliminar(const int &x){
    if(count == 0){
        cout<<endl<<"La lista se encuentra vacia"<<endl;
        return;
    }

    /*if(x < 0 and x > count){
        cout<<endl<<"Posicion no valida"<<endl;
        return;
    }*/

    count--;

    for(int i=x; i<count;i++)
        arreglo[i] = arreglo[i+1];
}

template <class T>
T* Arreglo<T>::busqueda_lineal(const T &e){
    for(int i = 0; i<count; i++){
        if(e == arreglo[i])
            return &arreglo[i];
    }

    return nullptr;
}

template <class T>
Arreglo<T*> Arreglo<T>::buscar_todos(const T &e){
    Arreglo<T*> ptrs;
    for(int i = 0; i<count; i++){
        if(e == arreglo[i])
            ptrs.insertar_final(&arreglo[i]);
    }

    return ptrs;
}

template<class T>
int Arreglo<T>::size(){
    return count;
}

template<class T>
T Arreglo<T>::operator[](const int &i){
    return arreglo[i];
}


 #endif //ARREGLO_H_INCLUDED