//int v[10];
//vector <int> lista(10);
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
using namespace std;
int main(){
    vector <int> lista(10);
    srand(time(NULL));
    for (int i = 0; i < lista.size(); i++)
        lista[i]=1+rand()%(10-1);
    
    /*for (int i = 0; i < lista.size(); i++)
        cout<<lista[i]<<"\t";*/
        
        for(int x:lista){
            cout<<x<<"\t";
        }
    return 0;
}