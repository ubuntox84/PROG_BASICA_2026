#include <iostream>
using namespace std;
int main () {
//variables
string name, state=" Es menor de edad";
int old;
cout<<"Ingrese su edad";
cin>>old;
cin.ignore();
cout<<"Ingrese su nombre";
getline(cin,name);
cout<<name<<endl;
cout<<old;

}