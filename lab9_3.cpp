#include<iostream>
using namespace std;

int main(){
    int age, height, bounty;
    string chara;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100) chara = "Chopper";
        else if(height < 180) chara = "Usopp";
        else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 1100000000) chara = "Zoro";
            else chara = "Sanji";
        }
    }
    else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty > 500000000) chara = "Jinbe";
        else chara = "Franky";
    }
    else{
        chara = "Brook";
    }

    cout << "Your character = " << chara;

    return 0;
}
