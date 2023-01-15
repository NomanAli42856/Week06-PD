#include<iostream>
using namespace std;

string activity(int h,int x,int y);

main()
{
    system("cls");

    int h,x,y;
    string res;
    cout << "Enter the height : ";
    cin >> h;
    cout << "Enter the x coordinate : ";
    cin >> x;
    cout << "Enter the y coordinate : ";
    cin >> y;
    res = activity(h,x,y);
    cout << res ;
    
}

string activity(int h,int x,int y)
{
    string act;
    if (x>0 && x<3*h && y > 0 && y< h)
    {
        act = "Inside";
    }
    else if (x>h && x<2*h && y > h && y < 4*h)
    {
        act = "Inside";
    }
    else if (x==0 && y >= 0  && y <= h)
    {
        act = "Border";
    }
    else if (x==3*h && y >= 0  && y <= h)
    {
        act = "Border";
    }
    else if (x==h && y >= h  && y <= 4*h)
    {
        act = "Border";
    }
    else if (x==2*h && y >= h  && y <= 4*h)
    {
        act = "Border";
    }
    else if (x>=h && x<=2*h  && y == 4*h)
    {
        act = "Border";
    }
    else if (x>=0 && x<=3*h  && y == 0)
    {
        act = "Border";
    }
    else if (x>=0 && x<=3*h && y == h)
    {
        act = "Border";
    }
    else
    {
       act = "Outside";
    }
    return act;
}