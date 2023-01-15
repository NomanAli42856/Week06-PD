#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int , int);
void maze();
void printpacman(int x, int y);
void erase(int x, int y);
char Getch(short int x,short int y);


int score;
main()
{
system("cls");

  bool runningame = true;
  int x = 8;
  int y = 8;
  maze();
  printpacman(x,y);
  while(runningame)
  {
    if(GetAsyncKeyState(VK_LEFT))
     {  
        char nextLocation = Getch(x-1,y);
        if (nextLocation == ' ')
        {
          erase(x,y);
          x=x-1;
          printpacman(x,y);
        }
        if (nextLocation == '.')
        {
          erase(x,y);
          x=x-1;
          printpacman(x,y);
          score = score + 1;
        }
        if (nextLocation == 'G')
        {
          runningame = false;
          gotoxy(5,25);
          cout << "SCORE : " << score;
        }
     }
    if(GetAsyncKeyState(VK_RIGHT))
     {
        char nextLocation = Getch(x+1,y);
        if (nextLocation == ' ')
        {
          erase(x,y);
          x=x+1;
          printpacman(x,y);
        }
        if (nextLocation == '.')
        {
          erase(x,y);
          x=x+1;
          printpacman(x,y);
          score = score + 1;
        }
        if (nextLocation == 'G')
        {
          runningame = false;
          gotoxy(5,25);
          cout << "SCORE : " << score;
        }
     }
    if(GetAsyncKeyState(VK_UP))
     {
        char nextLocation = Getch(x,y-1);
        if (nextLocation == ' ')
        {
          erase(x,y);
          y=y-1;
          printpacman(x,y);
        }
        if (nextLocation == '.')
        {
          erase(x,y);
          y=y-1;
          printpacman(x,y);
          score = score + 1;
        }
        if (nextLocation == 'G')
        {
          runningame = false;
          gotoxy(5,25);
          cout << "SCORE : " << score;
        }
     }
    if(GetAsyncKeyState(VK_DOWN))
     {
        char nextLocation = Getch(x,y+1);
        if (nextLocation == ' ')
        {
          erase(x,y);
          y=y+1;
          printpacman(x,y);
        }
        if (nextLocation == '.')
        {
          erase(x,y);
          y=y+1;
          printpacman(x,y);
          score = score + 1;
        }
        if (nextLocation == 'G')
        {
          runningame = false;
          gotoxy(5,25);
          cout << "SCORE : " << score;
        }
     }
     Sleep(150);
  }


}

char Getch(short int x,short int y)
{
  CHAR_INFO ci;
  COORD xy = {0,0};
  SMALL_RECT rect = {x,y,x,y};
  COORD coordBufSize;
  coordBufSize.X=1;
  coordBufSize.Y=1;  
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize,xy, &rect) ? ci.Char.AsciiChar : ' ';
}


void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printpacman(int x, int y)
{
  gotoxy(x,y);
  cout << "P";
}

void erase(int x, int y)
{
  gotoxy(x,y);
  cout << " ";
}


void maze()
{
cout << "   ############################################################################## "<< endl; 
cout << "   ||..    ....................................................    .........   || "<< endl;
cout << "   ||..    |%%%%%%%%|  ...     |%%%|    |%%|..    |%%%%%|   |%%%%%|  ......... ||"<< endl;
cout << "   ||..           |%|   |%|       |%|...     |%|    |%|   |%|..          |%|   ||"<< endl;
cout << "   ||..           |%|   |%|       |%|... G    |%|    |%|   |%|..          |%|  ||"<< endl;
cout << "   ||..    G       |%%%%%%%|     ..|%|...     |%%%%%%%%|     ........  %%%%%.  ||"<< endl;
cout << "   ||..           |%|           ..|%|...    ...........   |%|........       .  ||"<< endl;
cout << "   ||..           |%%%%%%%%|    ..|%|...    %%%%%%%%      |%|..        %%%%%.  ||"<< endl;
cout << "   ||..                  |%|.           |%|......         |%|..          |%|.  ||"<< endl;
cout << "   ||..         ........ |%|.           |%|....|%|           ..          |%|.  ||"<< endl;
cout << "   ||..|%| |%|%%|%|.|%|. |%|. |%|          ....|%|      G    ..|%|       |%|.  ||"<< endl;
cout << "   ||..|%| |%|  |%|.|%|..     %%%%%%%%%%   ....|%|           ..|%|       |%|.  ||"<< endl;
cout << "   ||..           %%%%%%%%%     ..|%|...     %%%%%%%%%%      ..        %%%%%.  ||"<< endl;
cout << "   ||..           |%|   |%|       |%|...     |%|    |%|   |%|.......     |%|   ||"<< endl;
cout << "   ||..           %%%%%%%%%     ..|%|...     %%%%%%%%%%      .......   %%%%%.  ||"<< endl;
cout << "   ||..         ........ |%|. G       |%|....|%|             .......     |%|.  ||"<< endl;
cout << "   ||..           %%%%%%%%%     ..|%|...     %%%%%%%%%%      .......   %%%%%.  ||"<< endl;
cout << "   ||..           |%|   |%|       |%|...     |%|    |%|   |%|..          |%|   ||"<< endl;
cout << "   ############################################################################## "<< endl;
}