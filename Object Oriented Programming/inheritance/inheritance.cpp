#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;

        public:
            int getAge(){
                return this->age;
            }
            void setWeight(int w){
                this->weight = w;
            }
};

class Male : public Human{   //publicly inherited
    public:
        string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
};

class Male1 : protected Human{   //protectedly inherited
    public:
        string color;

    int getHeight(){
        return this->height;
    }
};

class Male2 : private Human{   //privately inherited
    public:
        string color;

    int getHeight(){
        return this->height;
    }
};


int main(){

    Male obj1;
    cout<<obj1.age<<endl; //inheritance
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;
    obj1.sleep();

    Male1 obj2;
    cout<<obj2.getHeight()<<endl;

    Male2 obj3;
    // cout<<obj3.height<<endl;  //--> this is inaccessible 
    cout<<obj3.getHeight()<<endl;

    return 0;
}