//
//  tennis.cpp
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
    int score1, score2;
    string zero = "love", one = "fifteen", two = "thirty", three = "forty", tie = "all", tie3 = "deuce";
    cout<<"Enter score: ";
    cin>>score1>>score2;
    
    if(score1 == score2 && score1 == 3)
        cout<<tie3<<endl;
    else
    {
    switch(score1)
    {
        case 0:
        {
            cout<<zero;
            break;
        }
        case 1:
        {
            cout<<one;
            break;
        }
        case 2:
        {
            cout<<two;
            break;
        }
        case 3:
        {
            cout<<three;
            break;
        }
    }
    cout<<" ";
    if(score1 == score2)
        cout<<tie<<endl;
    else
        switch(score2)
        {
            case 0:
            {
                cout<<zero<<endl;
                break;
            }
            case 1:
            {
                cout<<one<<endl;
                break;
            }
            case 2:
            {
                cout<<two<<endl;
                break;
            }
            case 3:
            {
                cout<<three<<endl;
                break;
            }
        }
    }
    return 0;
}
