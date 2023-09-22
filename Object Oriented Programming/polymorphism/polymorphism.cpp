#include<bits/stdc++.h>
using namespace std;

class A {
      public:
        void sayHello(){
            cout<< "Hello YUZI" << endl;
        }

        // void sayHello(){                 ----> This will throw an error
        //     cout<< "Hello Mannu"<< endl;
        // }

        void sayHello(string name){  //function overloading  //compile time polymorphism
            cout<< "Hello "<< name << endl;
        }
};


class B{
    public:
        int a;
        int b;

        public:
            int add(){
                return a+b;
            }
        
        void operator+ (B &obj){
            int value1 =  this->a;
            int value2 = obj.a;
            cout<<"output: "<< value2 - value1<< endl;

        }

        void operator() (){
            cout<<"I'm Brackets: "<< this->a << endl;
        }

};


class Animal {
    public: 
        void speak(){
            cout<<"Speaking: "<<endl;
        }
};

class Dog: public Animal{
    public: 
        void speak(){  //function overriding  //Run time polymorphism
            cout<<"Barking: "<<endl;
        }
};


int main(){

    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;  // basically whenever this operator is present it'll will call the operator+ funcition

    // obj1();

    Dog obj;
    obj.speak(); //prints 'barking' not 'speaking' cos we have made our own implemetation of that function and overrided the previous one. 



    return 0;
}