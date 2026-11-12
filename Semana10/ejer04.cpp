#include<iostream>
using namespace std;

class Persona{
    protected:
    int a;
    int b;
    public:
    Persona(int, int);
    virtual void displayData()=0;
    virtual void mostrar()=0;
};
Persona::Persona(int x,int y):a(x),b(y){}

class Gente{

};

class Comercio{

};


class Alumno: public Persona, Gente, Comercio{
    private:
    string facu;
    public:
    Alumno(int x, int y, string cad):facu(cad),Persona(x,y){};
    void displayData() override;
    void mostrar()override;
};
void Alumno::displayData(){
    cout<<"Facultad"<<this->facu;
    cout<<"Nota 1"<<this->a;
    cout<<"Nota 2"<<this->b;
}
void Alumno::mostrar(){

}

int main(){
    Alumno a1(15,16,"Manuel"); 

    return 0;
}