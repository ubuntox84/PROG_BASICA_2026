#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
    srand(time(NULL));
    string names[]={"Ana","Beto","Carlo","Daniel","Esther","Federico","Emel"};
    int num=1+rand()%(6-0);
    cout<<names[num]; 
    return 0;
}