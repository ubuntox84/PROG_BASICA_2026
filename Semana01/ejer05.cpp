#include <iostream>
using namespace std;
int main () {
//variables
string name, state=" Es menor de edad";
int old;
cout<<"Ingrese su nombre";
cin>>name;
cout<<"Ingrese su edad";
cin>>old;
if(old>18){
    state=" Es mayor de edad";
}
cout<<"Nombre: "<<name<<" su edad es:  "<<old<<state;
return 0;
}