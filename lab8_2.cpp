//Dialog of the first example is given below.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int id; 
    string name,name2,name3,name4;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name <<": "; 
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR "<< id-12 << " I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": " ;
    getline(cin,name2);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": " ;
    getline(cin,name3);
    cout << "Fahsai: "<< name3 <<"....that is OK!!! I'm looking forward to watching " << name2 << " with you.\n";
    cout << name << ": ";
    getline(cin,name4); 
    cout << "Fahsai: 555+ see you "<< name3 <<". Bye Bye \\(^ ^)/";
}
