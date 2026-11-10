#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
    srand(time(NULL));
    int num=0;
    num=1+rand()%(5-0);
    cout<<num;
    return 0;
}