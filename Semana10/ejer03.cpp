#include<iostream>
using namespace std;

class Perro{
    public:
    Perro();
    Perro(int);
    Perro(int, int);
    Perro(int, int, int);
    virtual void mostrar()=0;
    void mostrar(int);
    void mostrar(int, int);
};
Perro::Perro(){

}
Perro::Perro(int x){

}
Perro::Perro(int x, int y){

}

int main(){
    Perro p1;
    return 0;
}