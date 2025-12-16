#include <iostream>
using namespace std;
int main(){
    string Character;
    long long Age, Height , Bounty;
    cout << "Enter your age: ";
    cin >> Age;
    if (Age <= 25){
        cout << "Enter your height: ";
        cin >> Height;
        if (Height < 100){
            Character = "Chopper";
        }
        else if (Height < 180){
            Character = "Usopp";
        }
        else {
            cout << "Enter your bounty: ";
            cin >> Bounty;
            if (Bounty <= 1100000000){
                Character = "Sanji";
            }else {Character = "Zoro";}
        }
    }

    else {
        if(Age <= 60){
            cout << "Enter your bounty: ";
            cin >> Bounty;
            if(Bounty > 500000000){
                Character = "Jinbe";
            }else {Character = "Franky";}
        }else {Character = "Brook";}
    }
    cout << "Your character = " << Character;
    return 0;
}