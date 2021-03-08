#include<iostream>

using namespace std;

class complex{

    public:
     int var1=5;
    virtual void display()=0;  //do-nothing function-->pure virtual function

//this is now become an abstract class due to pure virtual function
//and according to that we can't make objects of this class.
//obiously we can make pointers of this class 
};


class employee: public complex{

    public:
     int var2=10;
     void display(){
         cout<<"the value of the complex class variable"<<var1<<endl;
         cout<<"the value of the employee class variable"<<var2<<endl;
     }

};

class company: public complex{
    public:
     int var3=15;
     void display(){
       cout<<"the value of the complex class variable"<<var1<<endl;
    cout<<"the value of the company class variable"<<var3<<endl;
     } /// if this function is not there it will throw error
     ///if only virtual functions are there then base class display() will invoke
};


int main(){
complex *ptr;
//complex s1; //this throw an error bcz according to definition we cannot make objects of abstrct class
employee s2;
company s3;
ptr= &s3;

ptr->display();
    return 0;
}