#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
        void bark(){
            cout<<"Barking"<<endl;
        } 
};

class Human{
    public:
        string color;
    public:
    void speak(){
        cout<< "Speaking"<< endl;
    }
};


//Multiple Inheritance
class Hybrid: public Animal, public Human{

};

int main(){


    Hybrid k;
    k.speak();
    k.bark();
    cout<<k.age<<endl;


    return 0;
}