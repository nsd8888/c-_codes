#include <iostream>

using namespace std;

class calc
{

int a,b,c;

public:
    calc(int, int);
    void print(void);
};

void calc::print(void)
{
    

    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    cout << "the valu of c is " << c << endl;
}


calc::calc(int x,int y){

    a=x;
    b=y;
    c=(x+y);

}

int main()
{
    //implicit method

    calc c= calc(10,15);
    c.print();

    return 0;
}