#include<iostream>
using namespace std;

string activity(string tempr,string humidity);

main()
{
    system("cls");

    string tempr,humidity,res;
    cout << "Enter the temperature type : ";
    cin >> tempr;
    cout << "Enter the humidity : ";
    cin >> humidity;
    res = activity(tempr,humidity);
    cout << res ;
    
}

string activity(string tempr,string humidity)
{
    string act;
    if (tempr == "warm" && humidity == "dry")
    {
        act = "Play Tennis";
    }
    else if (tempr == "warm" && humidity == "humid")
    {
        act = "Swim";
    }
    else if (tempr == "cold" && humidity == "dry")
    {
        act = "Play basketball";
    }
    else if (tempr == "cold" && humidity == "humid")
    {
        act = "Watch TV";
    }
    return act;
}