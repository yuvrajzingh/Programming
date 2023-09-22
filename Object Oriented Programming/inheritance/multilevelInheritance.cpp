#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout<<"Speaking"<<endl;
        } 
};

class Dog: public Animal{

};


//Mulitlevel Inheritance
class Kamala: public Dog{

};

int main(){


    Kamala k;
    k.speak();
    cout<<k.age<<endl;


    return 0;
}