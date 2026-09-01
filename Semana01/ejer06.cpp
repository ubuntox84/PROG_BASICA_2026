//2. Almacenar nombre y 3 notas, escribir la notas y la condicion
// del estudiante si aprobo o desaprobo el curso de programacion 
// basica. 
#include <iostream>
using namespace std;
int main () {
    int note1, note2, note3,aproved;
    string name;
    float average;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter your notes: ";
    cin >> note1 >> note2 >> note3;
    average=(note1 + note2 + note3)/3.0;
    string result = (average>=10.5)? "Aproved" : "Not Aproved";
    cout<<"Name: "<<name<<"\nNotes:"<<note1<<"\t"<<note2<<"\t"<<note3<<
    "\neverage is: "<<average<<"\ncondition "<<result;
    return 0;
}