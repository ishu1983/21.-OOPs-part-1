#include<iostream>

using namespace std;
class car{
    string name;
    string colour;

public: 

    car(){
        cout<<"This is a non param constructor\n";
    }
    car(string name, string colour){
        cout<<"Constructor is called. object being created...\n";
        this->name = name;
        this->colour = colour;
    }
    void start(){
        cout<<"The car has Started\n";
    }

    void stop(){
        cout<<"The car has Stopped\n";
    }

    string getName(){
        return name;
    }
};
int main(){
    car c0;
    car c1("G-Wagon", "Black");
    cout<<"car Name:"<<c1.getName()<<endl;
    return 0;
}