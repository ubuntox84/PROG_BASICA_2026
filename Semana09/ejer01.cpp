#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    int password;
    public:
    void mostrar(){
        cout<<"Nombre "<<name<<" Edad: "<<age;
    }
    //get-set
    void setname(string n){
        this->name=n;
    }
    void setage(int x){
        this->age=x;
    }
    void setpassword(int p){
        this->password=p;
    }
    string getname(){
        return this->name;
    }
    int getage(){
        return this->age;
    }
    int getpassword(){
        return this->password;
    }
};
int main(){
    Person p1;
    p1.setname("Luis");
    p1.setage(19);
    p1.setpassword(5610);
    p1.mostrar();
    return 0;
}