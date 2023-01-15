#include<iostream>
using namespace std;

float checkCost(string fruit,string day,float quantity);

main()
{
    system("cls");
    
    float res,quantity;
    string fruit , day;
    cout << "Enter the fruit : ";
    cin >> fruit;
    cout << "Enter the day : ";
    cin >> day;
    cout << "Enter the number of quantities : ";
    cin >> quantity;
    res = checkCost(fruit,day,quantity);
    if (res == 0)
    {
        cout << "Invalid fruit or day is entered.";
    }
    else if (res > 0)
    {
        cout << "Cost : " << res;
    }
    
}

float checkCost(string fruit,string day,float quantity)
{
    float cost;
    if (day ==  "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if(fruit == "banana")
        {
            cost = 2.5*quantity;
        }
        else if(fruit == "apple")
        {
            cost = 1.2*quantity;
        }
        else if(fruit == "orange")
        {
            cost = 0.85*quantity;
        }
        else if(fruit == "grapefruit")
        {
            cost = 1.45*quantity;
        }
        else if(fruit == "kiwi")
        {
            cost = 2.70*quantity;
        }
        else if(fruit == "pineapple")
        {
            cost = 5.5*quantity;
        }
        else if(fruit == "grapes")
        {
            cost = 3.85*quantity;
        }
        else
        {
            cost = 0;
        }
    }
    else if (day ==  "saturday" || day == "sunday")
    {
        if(fruit == "banana")
        {
            cost = 2.7*quantity;
        }
        else if(fruit == "apple")
        {
            cost = 1.25*quantity;
        }
        else if(fruit == "orange")
        {
            cost = 0.9*quantity;
        }
        else if(fruit == "grapefruit")
        {
            cost = 1.6*quantity;
        }
        else if(fruit == "kiwi")
        {
            cost = 3.00*quantity;
        }
        else if(fruit == "pineapple")
        {
            cost = 5.6*quantity;
        }
        else if(fruit == "grapes")
        {
            cost = 4.20*quantity;
        }
        else
        {
            cost = 0;
        }
    }
    else
    {
        cost = 0;
    }
    return cost;
}