#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    string carne, nombres, apellidos;
    int carnet, telefono;

    cout<<"-----     INGRESO DE ESTUDIANTES:     -----"<<endl;
    cout<<" "<<endl;
    cout<<"Ingrese No. de Carne: "<<endl;
    cin>>carnet;
    cout<<"Ingrese Apellidos: "<<endl;
    cin>>apellidos;
    cout<<"Ingrese Nombres: "<<endl;
    cin>>nombres;
    cout<<"Ingrese Telefono: "<<endl;
    cin>>telefono;

    Student obj = Student(nombres, apellidos, telefono, carnet);
    obj.mostrar();
    cout<<" "<<endl;
    cout<<"-----            MODIFICAR:            ----- "<<endl;
    cout<<" "<<endl;
    cout<<"Ingrese Apellidos: "<<endl;
    cin>>apellidos;
    cout<<"Ingrese Nombres: "<<endl;
    cin>>nombres;
    cout<<"Ingrese Telefono: "<<endl;
    cin>>telefono;

    //mostrar:

    cout<<obj.getCarnet()<<endl;
    cout<<obj.getNombres()<<endl;
    cout<<obj.getApellidos()<<endl;
    cout<<obj.getTelefono()<<endl;


    return 0;
}
