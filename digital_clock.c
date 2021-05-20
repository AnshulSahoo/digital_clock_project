#include<stdio.h>
#include<conio.h>
#include<windows.h>

void main()
{
    int h,s,m;

    printf("Enter the currnt time in format of hh mm ss:\n");

    //enter hours
    printf("Enter hours:\n");
    scanf("%d",&h);

    //enter minutes
    printf("Enter minute:\n");
    scanf("%d",&m);

    //enter seconds
    printf("Enter seconds:\n");
    scanf("%d",&s);

    while(h<24){
        while(m<60){
            while(s<60){
                Sleep(1000);
                system("CLS");
                for(int i=0;i<10;i++){
                    printf("\n");
                }
                printf("hh : mm : ss\n");
                s++;
                for(int i=0;i<6;i++){
                    printf("\t");
                }
                printf("%d : %d : %d\n",h,m,s);
                for(int i=0;i<6;i++){
                    printf("t");
                }
            }
            m++;
            s=0;
        }
        h++;
        m=0;
    }

    getch();
}