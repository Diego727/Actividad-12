#ifndef ARREGLO_H_INCLUDED
#define ARREGLO_H_INCLDUDED

#include <iostream>
#include <string>

class Arreglo{
    private:
        std::string *arreglo;
        int tam;
        int count;
        const static int MAX = 5;

        void expandir();
    
    public:
        Arreglo();
        ~Arreglo();
        void insertar_final(const std::string &);
        void insertar_inicio(const std::string &);

        int size();
        std::string operator[](const int&);
    
};

 #endif //ARREGLO_H_INCLUDED