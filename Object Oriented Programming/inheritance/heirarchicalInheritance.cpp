#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
        void speak1(){
            cout<<"Speaking"<<endl;
        } 
};

class Human: public Animal{
    public:
        string color;
    public:
    void speak2(){
        cout<< "talking"<< endl;
    }
};

class Dog: public Animal{
    public: 

        void speak3(){
            cout<<"Woof"<<endl;
        } 
};




int main(){

    Animal obj1;
    obj1.speak1();

    Human obj2;
    obj2.speak1();
    obj2.speak2();

    Dog obj3;
    obj3.speak1();
    obj3.speak3();
    


    return 0;
}