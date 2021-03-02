#include<iostream>

using namespace std;

class employee{

private:
int a,b,c;
public:
int d,e;

void getthedata();
void setthedata(int a1,int a2,int a3);

};

void employee :: setthedata(int a1,int a2,int a3){

a=16525;
b=a2;
c=a3;
}

void employee :: getthedata(){

    cout<<"the value of a"<<a<<endl;
    cout<<"the value of a"<<b<<endl;
    cout<<"the value of a"<<c<<endl;
    cout<<"the value of a"<<d<<endl;
    cout<<"the value of a"<<e<<endl;

}

int main(){

    employee harry;

    harry.d=135;
    harry.e=120;
    harry.setthedata(16,135,177);
    harry.getthedata();
    return 0;

}