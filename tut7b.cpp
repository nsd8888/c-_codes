#include <iostream>
#include <cmath>

using namespace std;

class dist;
class calc{
    double p,q,s;
    public:
    //int calculates();
    void power1(dist ,dist );

};

class dist
{

    int x, y;
    int a1, a2;
    friend void calc:: power1(dist pt1 ,dist pt2);

public:

    void setdata(void);
    void getdata(void);
};

void dist::setdata()
{

    cout << "enter the values" << endl;
    cin >> a1;
    cout << "enter the value" << endl;
    cin >> a2;
}

void dist :: getdata()
{
     x= a1;
     y= a2;
    
}




void calc:: power1(dist pt1,dist pt2){

  
    p=pow(((pt1.x)-(pt2.x)),2); 
    q=pow(((pt1.y)-(pt2.y)),2); 

    s= (p+q);
    cout<<sqrt(s)<<endl;


    
}



int main()
{

    dist pt1, pt2;
    pt1.setdata();
    pt1.getdata();

    pt2.setdata();
    pt2.getdata();

    calc z;
    z.power1(pt1,pt2);

    

    return 0;
}