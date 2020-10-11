//
// Created by Jonathan Raxon on 10/11/2020.
//

#ifndef TAREA_CLASE_ESTUDIANTE_PERSONA_H
#define TAREA_CLASE_ESTUDIANTE_PERSONA_H

#include <iostream>
using namespace std;

class Persona {
protected: int telefono;
    string nombres, apellidos;

protected:
    Persona (string nom, string ape, int tel){
        nombres = nom;
        apellidos = ape;
        telefono = tel;
    }



};


#endif //TAREA_CLASE_ESTUDIANTE_PERSONA_H
