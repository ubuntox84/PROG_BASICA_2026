#include<iostream>

using namespace std;
int main(){
    int x=10;
    cout<<x<<endl;
int *p;
p=&x;
*p=250;
cout<<x;
return 0;
}