#include <bits/stdc++.h>
using namespace std;
 
class Hero
{

    // properties or Data Members
private:
    int health;

public:
    int getHealth()
    { // getter function
        return health;
    }

    void setHealth(int h)
    { // setter function
        health = h;
    }

    //parameterised constructor
    Hero(int health){
        this -> health = health;
    }

    static int timeToComplete;

    static int random(){
        return timeToComplete;
    }


    //destructor
    ~Hero(){
        cout<<"Destructor Called"<<endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{

    // creation of Object
    //static allocation
    // Hero h1;

    //dynamic allocation(memory allocated uin heap)
    // Hero *yuvi = new Hero(70);
    Hero yuvi(40);
    // h2 -> sethealth(70);
    cout << "Yuvi Health is: "<< (yuvi).getHealth() <<endl;

    //copy constructor
    Hero mannu(yuvi);
    cout << "Mannu Health is: "<< mannu.getHealth() <<endl;

    yuvi.setHealth(10);
    cout << "Yuvi Health is: "<< (yuvi).getHealth() <<endl;

    cout << "Mannu Health is: "<< mannu.getHealth() <<endl;

    // cout<<"size: " << sizeof(h1) << endl;
    // cout << "Health is: " << h1.getHealth() << endl; // return a garbage value cos the value hasn't been set yet.
    // h1.sethealth(70);
    // cout << "Health is: " << h1.getHealth() << endl; // returns 70

    //static keyword

    cout<<Hero::timeToComplete<<"---> Called by variable"<<endl;
    cout<<Hero::random()<<"---> Called by function"<<endl;


    return 0;
}