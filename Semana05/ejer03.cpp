/*
Ejercicio: se pide realizar una función elevado a la potencia, es decir “m” 
elevado a la “n”,
Utilizando funciones de otros
*/
#include<iostream>

using namespace std;

int Exponente(int m,int n){
    int exp=1;
    for (int i = 0; i < n; i++)
        exp*=m;
    return exp;
}
int main(){
    int x,y;
    cout<<"valor de X";
    cin>>x;
    cout<<"Valor de Y";
    cin>>y;
    int resp=Exponente(x,y);
    cout<<"El exponente de "<<x<<" elevado "<<y<<" es: "<<resp;
return 0;
}