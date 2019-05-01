#include<iostream>
#include<conio.h>
#include<cstdio>
#include<cstdlib>
#include<process.h>
#include<dos.h>
#include<fstream>


//#define spacebar  0
#define KeyUp    72
#define KeyDown  80
#define KeyLeft  75
#define KeyRight 77
#define Escape   27
using namespace std;

int main()
{
    int count = 300;
    int point= 0;
    int m=7,n=45;
    int row=15,col=89;
    char arr[row][col];
    int p=6,q=48;
    int x,y,ch;
    int i,j;
    while(count)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i>0  &&  i<row-1 && j>0 && j<col-1)
                {
                   arr[i][j]=' ';
                }
                else
                {
                    arr[i][j]=219;
                }
                if(i==(row-1))
                {
                    arr[i][j]=223;
                }
                if(i==0)
                {
                    arr[i][j]=220;
                }
                arr[m][n-2]=254;
                arr[m][n-1]=219;
                arr[m][n]=254;
                arr[m][n+1]=58;
                arr[m][n+2]=60;
                arr[p][q]=42;
                if(p==m && (q==n+2 || q==n+1 || q==n-1 || q==n-2))
                {
                    p=rand()%13;if(p==0){p++;}
                    q=rand()%84;if(q==0){q++;}
                    point++;
                }
                cout<<arr[i][j];
            }
            cout<<endl;
        }
        if(kbhit())
        {
            ch = getch();
        switch(ch)
        {
            /*case spacebar:
                system("pause");
                break;*/
            case KeyUp:
                if(m>=2){m--;}else{m=13;}break;
            case KeyDown:
                if(m<=12){m++;}else{m=1;}break;
            case KeyLeft:
                if(n>=3){n--;}break;
            case KeyRight:
                if(n<=84){n++;}break;
            case Escape:
                exit(1);
            }
        }
         for(int k = 0;k<555555;k++)
        {
        }
        if(m>13)
        {
            m=1;
            n=2;
        }
        if(n>86)
        {
            n=0;
        }
        system("cls");
        n++;
        count--;
        printf("Press ESC to escape");
        printf("\ntime remains: %d\n",count);
        printf("your points: %d\n",point);
    }
    printf("\nOoops!!!Game Over!!!\n");
    printf("\nPOKA game is developed by\nMd. Marufur Rahman (Remon)\nDept. of CSE, CUET\n\n");
    printf("Press any key to exit");
    char sad;
    sad = getch();
}

