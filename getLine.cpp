#include<iostream>
#include<string>
using namespace std;
int main(){
    int age;
    string name;
    cout <<"Enter your Age:";
    cin>>age;
    cin.ignore(); // cin.ignore() used to remove that leftover newline (Enter) before getline();
    cout<<"Enter your name: ";
    /* cin>>name; if user enters : more than a single word, ex- "Raj Singh" then it is 
    read only single word means "Raj" only not "Singh" Because cin>> stop reading when it encounters a space */

    getline(cin, name); // getline() stores the complete "Raj Singh" , This is different from cin>>

    cout<<"Hello "<<name<<endl;
    cout<<"Your Age: "<<age<<endl;
    return 0;
}