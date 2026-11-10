#include <iostream>
#include <cmath>
using namespace std;
int main(){

    double lado, area, perimetro, diagonal;


    cout<<"Tenemos un cuadrado"<<endl;
    cout<<"Ingrese la medida del lado: ";
    cin>>lado;
    area =lado *lado;
    perimetro = lado * 4;
    diagonal = lado * sqrt(2);


    cout<<"El area del cuadrado es: "<<area<<endl;
    cout<<"El perimeto del cuadrado es: "<<perimetro<<endl;
    cout<<"La diagonal del cuadrado es: "<<diagonal<<endl;

    return 0;
}