#include<iostream>

using namespace std;

class student {
    string name;

    public:
        float cgpa;

        void getPercentage(){
            cout<<(cgpa * 10)<<"%"<<endl;
        }
};
int main(){
    student s1;
    // s1.name = "Ishu";
    s1.cgpa = 9.0;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();
    return 0;
}