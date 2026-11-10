/*Crear un programa que permita ingresar 10 números enteros 
en un array y luego mostrarlos en pantalla.*/
#include <iostream>
using namespace std;
int main(){
    int x[10];
    cout<<"input ten value: "<<endl;
    for(int i=0;i<10;i++){
        cin>>x[i];
    }
    cout<<"View array: "<<endl;
    for(int i=0;i<10;i++){
        cout<<x[i]<<"\t";
    }
return 0;
}