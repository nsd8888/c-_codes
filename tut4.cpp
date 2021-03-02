#include<iostream>

using namespace std;

int main(){

    int a=5;
    int* b=&a;
    cout<<*b<<endl;
    cout<<&a<<endl;
    int** c=&b;
    cout<<"the adress of c is"<<c<<endl;
    cout<<"the valu at adress c"<<**c<<endl;
    return 0;

}