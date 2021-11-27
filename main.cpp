#include <iostream>

using namespace std;

class Humano{


public:
    virtual void come(){

    cout<<"El humano come"<<endl;

    }
    virtual void vive()=0;




};

class Estudiante: public Humano{
private:
    int identificacion;
    string nombre;
    string apellido;
public:
    Estudiante(int,string,string);
    void vive();
    void mostrar();



};


Estudiante::Estudiante(int _identificacion, string _nombre,string _apellido){

identificacion = _identificacion;
nombre = _nombre;
apellido = _apellido;

}

void Estudiante::mostrar(){
cout<<"Identificacion: "<<identificacion<<endl;
cout<<"Nombre: "<<nombre<<endl;
cout<<"Apellido: "<<apellido<<endl;


}

void Estudiante::vive(){

cout<<"El estudiante vive"<<endl;


}














int main(){

Estudiante estudiante(22,"matias","sanchez");
estudiante.mostrar();
estudiante.vive();


}
