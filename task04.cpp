#include<iostream>
using namespace std;

float billcal(char cus,char time,int min);

main()
{
    system("cls");

    char cus,time;
    float min,res;
    cout << "Enter which type of customer you are (regular or premium) select (r/p) : ";
    cin >> cus;
    cout << "(Press 'D' for daytime and 'N' for nighttime ) : ";
    cin >> time;
    cout << "Enter the number of the minutes used : ";
    cin >> min;
    res = billcal(cus,time,min);
    cout << "The charges are : " << res << "$";
    
}

float billcal(char cus,char time,int min)
{
    float bil,ext;
    if (cus == 'r' && min <=50)
    {
        bil = 10;
    }
    else if (cus == 'r' && min > 50)
    {
        ext = min - 50;
        bil = 10 + (0.2*ext);
    }
    else if (cus == 'p' && time == 'D' && min <= 75)
    {
        bil = 25;
    }
    else if (cus == 'p' && time == 'D' && min > 75)
    {
        ext = min - 75;
        bil = 25 + (0.1*ext);
    }
    else if (cus == 'p' && time == 'N' && min <= 100)
    {
        bil = 25;
    }
    else if (cus == 'p' && time == 'N' && min > 100)
    {
        ext = min - 100;
        bil = 25 + (0.05*ext);
    }
    return bil;
}