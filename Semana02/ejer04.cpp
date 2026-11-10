#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x[5];
    int y[]={5,8,9,7,6};
    //int *p=y;
    int i=0;
    while(i<5){
        cout<<*(y+i);
        //i=i+1;
        i++;
    }
    
    return 0;
}