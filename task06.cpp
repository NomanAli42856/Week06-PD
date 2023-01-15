#include<iostream>
using namespace std;

float apartment(string month,int days);
float studio(string month,int days);

main()
{
    system("cls");

    string month;
    float days,apar_res,std_res;
    cout << "Enter the month : ";
    cin >> month;
    cout << "Enter the number of days to stay : ";
    cin >> days;
    apar_res = apartment(month,days);
    cout << "Appartment : " << apar_res << "$" << endl;
    std_res = studio(month,days);
    cout << "Studio : " << std_res << "$";
}

float apartment(string month,int days)
{
    float finalprice;
    if (days > 7 && days <=14 && (month == "may" || month == "october"))
    {
        float price = 65*days ;
        finalprice = price;
    }
    else if (days > 14 && (month == "may" || month == "october"))
    {
        float price = 65*days ;
        finalprice = price - (0.3*price);
    }
    else if (days > 14 && (month == "june" || month == "september"))
    {
        float price = 68.7*days ;
        finalprice = price - (0.2*price);
    }
    else
    {
        float price = 77 * days;
        finalprice = price;
    }
    return finalprice;
}

float studio(string month,int days)
{
    float finalprice;
    if (days > 7 && days <=14 && (month == "may" || month == "october"))
    {
        float price = 50*days ;
        finalprice = price - (0.05*price);
    }
    else if (days > 14 && (month == "may" || month == "october"))
    {
        float price = 50*days ;
        finalprice = price - (0.3*price);
    }
    else if (days > 14 && (month == "june" || month == "september"))
    {
        float price = 75.2*days ;
        finalprice = price - (0.2*price);
    }
    else
    {
        float price = 76 * days;
        finalprice = price - (0.1*price);
    }
    return finalprice;
}