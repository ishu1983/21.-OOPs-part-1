#include<iostream>

using namespace std;
class User{
    int id;
    string password;

    public:
        string username;
        User(int id){
            this->id = id;
        }

    // getters
    string getPassword(){
        return password;
    }

    //setters
    void setPassword(string password){
            this->password=password;
    }
};
int main(){
    User user1(101);
    user1.username = "Nubh";
    user1.setPassword ("0749");

    cout<<"Username: "<<user1.username<<endl;
    cout<<"Password: "<<user1.getPassword()<<endl;
    return 0;
}