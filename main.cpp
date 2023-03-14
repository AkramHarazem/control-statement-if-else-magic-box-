#include <iostream>
#include <windows.h>
using namespace std;
COORD coord= {0,0}; // this is global variable
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    int siz,col,row;
    cout<< "enter num"<<endl;
    cin>> siz;
    if (siz%2==0){
        cout<< "enter valid numb"<<endl;
    }else{
        col=(siz+1)/2;
        row=1;
        gotoxy (col*5,row*5);
        cout<<1;
        for (int i=2;i<=siz*siz;i++){
            if ((i-1)%siz!=0){
                col--;
                row--;
                if(row<1)
                    row=siz;
                else if (row>siz)
                    row=1;
                if(col<1)
                    col=siz;
                else if (col>siz)
                    col=1;
                }else{
                    row++;
                }
            gotoxy (col*5,row*5);
           cout<<i;
        }
    }

    return 0;
}
