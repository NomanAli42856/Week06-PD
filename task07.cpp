#include<iostream>
using namespace std;

int hour(int hrst,int minst,int arhr,int armin);

main()
{
    system("cls");

    int ehr,emin,arhr,armin,res,_hr,res_min;
    cout << "Enter the exam starting hour : ";
    cin >> ehr;
    cout << "Enter the exam starting minute : ";
    cin >> emin;
    cout << "Enter the exam starting hour : ";
    cin >> arhr;
    cout << "Enter the exam starting minute : ";
    cin >> armin;
    res = hour(ehr,emin,arhr,armin);
    if (res > 0)
    {
        int hr = res/60;
        int mn = res%60;
        cout << "Early" << endl << hr << ":" << mn << "   before start time";
    }
    else if (res < 0)
    {
        int temp = abs(res);
        int hr = temp/60;
        int mn = temp%60;
        cout << "Late" << endl << hr << ":" << mn << "   after start time";
    }
    else if (res == 0)
    {
        cout << "Reached on time";
    }
}

int hour(int hrst,int minst,int arhr,int armin)
{
    int startingtime,arrivaltime;
    startingtime = (hrst*60)+minst;
    arrivaltime = (arhr*60)+armin;
    return (startingtime - arrivaltime);
}
