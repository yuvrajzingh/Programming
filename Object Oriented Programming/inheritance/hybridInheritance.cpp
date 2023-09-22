#include<bits/stdc++.h>
using namespace std;

class A{
    public: 
        void print1(){
            cout<<"This is class A"<<endl;
        }
};


class B: public A{
    public: 
        void print2(){
            cout<<"This is class B"<<endl;
        }
};

class D{
    public: 
        void print3(){
            cout<<"This is class D"<<endl;
        }
};

class C: public A, public D{
    
};


int main(){

    A obj1;
    cout<<"For class A ---"<<endl;
    obj1.print1();

    B obj2;
    cout<<"For class B ---"<<endl;
    obj2.print1();
    obj2.print2();

    D obj3;
    cout<<"For class D ---"<<endl;
    obj3.print3();

    C obj4;
    cout<<"For class C ---"<<endl;
    obj4.print1();
    obj4.print3();



    return 0;
}