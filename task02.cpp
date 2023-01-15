#include<iostream>
using namespace std;

float tot(float eng,float math,float chem,float soc,float bio);
float per(float eng,float math,float chem,float soc,float bio);
string grade(float eng,float math,float chem,float soc,float bio);

main()
{
    system("cls");

    string name,grad;
    float eng,math,chem,soc, bio,total,percent;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter english marks : ";
    cin >> eng;
    cout << "Enter chemistry marks : ";
    cin >> chem;
    cout << "Enter social study marks : ";
    cin >> soc;
    cout << "Enter biology marks : ";
    cin >> bio;
    cout << "Enter math marks : ";
    cin >> math;
    total = tot(eng,math,chem,soc, bio);
    cout << name << endl << "Total Marks = " << total << endl;
    percent = per(eng,math,chem,soc, bio);
    cout << "Percentage = " << percent << endl;
    grad = grade(eng,math,chem,soc, bio);
    cout << "Grade = " << grad;
    
}

float tot(float eng,float math,float chem,float soc,float bio)
{
    float tota = eng + math + chem + soc + bio;
    return tota;
}

float per(float eng,float math,float chem,float soc,float bio)
{
    float tota = eng + math + chem + soc + bio;
    float percen = (tota/500)*100;
    return percen;
}

string grade(float eng,float math,float chem,float soc,float bio)
{
    float tota = eng + math + chem + soc + bio;
    float percen = (tota/500)*100;
    string gr;
    if (percen >= 90)
    {
        gr = "A+";
    }
    else if (percen >= 80 && percen < 90)
    {
        gr = "A";
    }
    else if (percen >= 70 && percen < 80)
    {
        gr = "B+";
    }
    else if (percen >= 60 && percen < 70)
    {
        gr = "B";
    }
    else if (percen >= 50 && percen < 60)
    {
        gr = "C";
    }
    else if (percen >= 40 && percen < 50)
    {
        gr = "D";
    }
    return gr;
}