
//  main.cpp
//  ATM
//
//  Created by Elcam Hategekimana on 2/22/22.
//
 
#include <iostream>
using namespace std;
 
void showMenu (){
    cout <<"**********MENU**********"<<endl;
    cout<<"1. Check Amount"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"********************"<<endl;
}
int main ()
{
    //check balance, deposit, withdraw, show menu
    int option;
    double Amount = 50000;
    
    do {
    showMenu();
    cout<<"option";
    cin>>option;
   
    switch (option){
        case 1:cout<<"Amount is:"<<Amount<<"$"<<endl;break;
        case 2:cout<<"deposit amount:";
            double depositAmount;
            cin>>depositAmount;
            Amount += depositAmount;
            break;
        case 3: cout<<"withdraw amount:";
            double withdrawAmount;
            cin>>withdrawAmount;
            if (withdrawAmount <= Amount)
                Amount -= withdrawAmount;
            else
                cout<<"You don't have enough money on your account"<<endl;
            break;
    }
    } while (option!=4);
    
        system("pause>0");
    }
            
            
            
 

