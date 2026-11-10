#include<iostream>
using namespace std;

class Product{
    private:
    string code;
    string name; 
    double price;
    public:
    Product(string c,string n,double p){
        this->code=c;
        this->name=n;
        this->price=p;
    }

    ''Product(string c,string n,double p):code(c),name(n), price(p){ }
    
    double getprice(){
        return this->price;
    }
    void displayData(){
        cout<<"Code: "<<this->code<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Price: "<<this->price<<endl;
    }
    void priceCategoria(){
        if(this->price>=100)
            cout<<"Categoria: Precio alto"<<endl;
        else
            cout<<"Categoria: Precio bajo"<<endl;
    }
};
int main(){
    Product product1("001C","Mouse",112.5);
    product1.displayData();
    product1.priceCategoria();  


return 0;
}