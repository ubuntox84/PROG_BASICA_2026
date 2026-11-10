#include<iostream>
using namespace std;
class Course{
    private:
    string code;
    string name;
    int credits;
    public:
    Course (string c,string n, int cr):code(c),name(n),credits(cr){}
    void displayData(){
        cout<<"Code: "<<this->code<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Credits: "<<this->credits<<endl;
    }
    void LevelCourse(){
        if(this->credits>=4)
        cout<<"Categoria: alta carga academica"<<endl;
        else
        cout<<"Categori: baja carga academica "<<endl;
    }
};
int main(){
  Course curso1("IS040101","Ingles Tecnico de Informatica",3);
  Course curso2("IS040104","Programacion basica",6);
  curso1.displayData();
  curso1.LevelCourse();
  curso2.displayData();
  curso2.LevelCourse();


return 0;
}