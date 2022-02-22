#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int capacity = 100; // edit the capacity quickly i thought why to make a saperate charector for it if we can directly put the value but what if we have to increase or decrease it kya 50 jagaho se edit karoge?
    int totalparticipants = 0;

    while(totalparticipants < capacity){
        string isAlumnus;
        string passcode;
        cout<< "Are you an alumnus(Y/N): ";
        cin>> isAlumnus;

        if(isAlumnus != "Y"){
            cout<<"Sorry, this party is only for GECA aluminus\n Only GECA students are permitted."<<endl;
            continue;
        }

        cout<< endl<< "Enter Passcode: ";
        cin >> passcode;

        

        if(passcode != "classroom"){
            cout << "Wrong passcode entered! Locking the system..."<<endl;
            break;
        }

        cout<< "Welocome to the party! "<< endl;
        totalparticipants++;
    }
}