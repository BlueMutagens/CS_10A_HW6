//
//  main.cpp
//  Homework6
//
//  Created by Sean Belingheri on 10/6/22.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(2);
    string const itemA = "Doritos", itemB = "Monster", itemC = "Twinkies", itemD = "Water";
    float const priceA = 2.00, priceB = 2.50, priceC = 1.50, priceD = 3.00,
                dollar = 1.00, quarter = 0.25, dime = 0.10, nickle = 0.05;
    int dollarinsert, quarterinsert, dimeinstert, nickleinstert, width;
    float total;
    char selection;
    
    if(( itemA.length() >= itemB.length() ) && ( itemA.length() >= itemC.length() ) && ( itemA.length() >= itemD.length() ))
        width = itemA.length();
    else if(( itemB.length() >= itemA.length() ) && ( itemB.length() >= itemC.length() ) && ( itemB.length() >= itemD.length() ))
        width = itemB.length();
    else if(( itemC.length() >= itemA.length() ) && ( itemC.length() >= itemB.length() ) && ( itemC.length() >= itemD.length() ))
        width = itemC.length();
    else
        width = itemD.length();
    
    cout<<"Items available:\n"<<"A. "<<left<<setw(width)<<itemA<<" | $"<<priceA<<endl
                              <<"B. "<<left<<setw(width)<<itemB<<" | $"<<priceB<<endl
                              <<"C. "<<left<<setw(width)<<itemC<<" | $"<<priceC<<endl
                              <<"D. "<<left<<setw(width)<<itemB<<" | $"<<priceD<<endl;
    cout<<"Please insert money (Pennies not accepted)\nHow many dollars? ";
    cin>>dollarinsert;
    cout<<"How many quarters? ";
    cin>>quarterinsert;
    cout<<"How many dimes? ";
    cin>>dimeinstert;
    cout<<"How many nickles? ";
    cin>>nickleinstert;
    total = (dollar * dollarinsert) + (quarter * quarterinsert) + (dime * dimeinstert) + (nickle * nickleinstert);
    
    cout<<"Make an item selection: ";
    cin>>selection;
    
    switch(selection)
    {
        case 'A':
        {
            if(total >= priceA)
                cout<<"Enjoy your "<<itemA<<endl;
            else
                cout<<"Insufficient funds. Money returned.\nHave a nice day!"<<endl;
            break;
        }
        case 'B':
        {
            if(total >= priceB)
                cout<<"Enjoy your "<<itemB<<endl;
            else
                cout<<"Insufficient funds. Money returned.\nHave a nice day!"<<endl;
            break;
        }
        case 'C':
        {
            if(total >= priceC)
                cout<<"Enjoy your "<<itemC<<endl;
            else
                cout<<"Insufficient funds. Money returned.\nHave a nice day!"<<endl;
            break;
        }
        case 'D':
        {
            if(total >= priceD)
                cout<<"Enjoy your "<<itemD<<endl;
            else
                cout<<"Insufficient funds. Money returned.\nHave a nice day!"<<endl;
            break;
        }
        default:
            cout<<"Invalid selection. Money returned.\nHave a nice day!"<<endl;
            
    }
    
    return 0;
}
