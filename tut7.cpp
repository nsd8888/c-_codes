#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x1,y1,x2,y2;
    int a1,a2,b1,b2;
    public:
    friend int calculates(point ,point );
    void  setdata1(){
        cout<<"enter the x co-ordinate of point p"<<endl;
        cin>>a1;
        cout<<"enter the y co-ordinate of point p"<<endl;
        cin>>b1;
    }

    void setdata2(){
        cout<<"enter the x co-ordinate of point q"<<endl;
        cin>>a2;
        cout<<"enter the y co-ordinate of point q"<<endl;
        cin>>b2;
    }


    
    void  getdata1();
    void  getdata2();



};


void point:: getdata1(){
 
     x1=a1;
     y1=b1;
}
void point:: getdata2(){
 
     x2=a2;
     y2=b2;
}


 int calculates(point o1,point o2){

    int x,y,l;
    //float d;

    x=((o1.x1) - (o2.x2));
    y=((o1.y1) - (o2.y2));

    l= sqrt(pow(x,2) + pow(y,2));

    return l;
    
}

int main(){

    point p;
    p.setdata1();
    p.getdata1();
    point q;
    q.setdata2();
    q.getdata2();

    cout<<"the dist between two points are "<<calculates(p,q)<<endl;

    return 0;
}



