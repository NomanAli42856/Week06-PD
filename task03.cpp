#include<iostream>
using namespace std;

string signs(int date,string month);

main()
{
    system("cls");

    string month,res;
    int date;
    cout << "Enter the date of birth : ";
    cin >> date;
    cout << "Enter the month : ";
    cin >> month;
    res = signs(date,month);
    cout << res ;
    
}

string signs(int date,string month)
{
    string act;
    if (date >= 20 && month == "january" || date <=18 && month == "february")
    {
        act = "Aquarius";
    }
    else if (date >= 19 && month == "february" || date <=20 && month == "march")
    {
        act = "Pisces";
    }
    else if (date >= 21 && month == "march" || date <=19 && month == "april")
    {
        act = "Aries";
    }
    else if (date >= 20 && month == "april" || date <=20 && month == "may")
    {
        act = "Taurus";
    }
    else if (date >= 21 && month == "may" || date <=20 && month == "june")
    {
        act = "Gemini";
    }
    else if (date >= 21 && month == "june" || date <=22 && month == "july")
    {
        act = "Cancer";
    }
    else if (date >= 23 && month == "july" || date <=22 && month == "august")
    {
        act = "Leo";
    }
    else if (date >= 23 && month == "august" || date <=22 && month == "september")
    {
        act = "Vigro";
    }
    else if (date >= 23 && month == "september" || date <=22 && month == "october")
    {
        act = "Libra";
    }
    else if (date >= 23 && month == "october" || date <=21 && month == "november")
    {
        act = "Scorpio";
    }
    else if (date >= 22 && month == "november" || date <=21 && month == "december")
    {
        act = "Sagittarius";
    }
    else if (date >= 22 && month == "december" || date <=19 && month == "january")
    {
        act = "Capricorn";
    }
    return act;
}