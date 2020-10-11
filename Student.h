//
// Created by Jonathan Raxon on 10/11/2020.
//

#ifndef TAREA_CLASE_ESTUDIANTE_STUDENT_H
#define TAREA_CLASE_ESTUDIANTE_STUDENT_H
#include<iostream>
#include"Persona.h"

using namespace std;

class Student:Persona {
private:
    int carnet;

public:
    Student(string nom, string ape, int tel, int ID) : Persona(nom, ape, tel) {
        carnet = ID;
    }
    //MODIFICAR:
    void setCarnet (int ID) {carnet = ID;}
    void setApellidos (string ape) {apellidos = ape;}
    void setNombres (string nom) {nombres = nom;}
    void setTelefono (int tel) {telefono = tel;}

    //MOSTRAR:

    int getCarnet() {return carnet;}
    string getApellidos() {return apellidos;}
    string getNombres() {return nombres;}
    int getTelefono() {return telefono;}


    //METODOS:

    void mostrar(){
        cout<<"**************************"<<endl;
        cout<<"Carnet: "<<carnet<<" / Apellidos: "<<apellidos<<" / Nombres:"<<nombres<<" /  Telefono: "<<telefono<<endl;
    }
};


#endif //TAREA_CLASE_ESTUDIANTE_STUDENT_H
