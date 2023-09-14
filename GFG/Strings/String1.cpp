#include <conio.h>
#include <stdio.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    system("cls");
    char s1[] = "gfg";
    char s2[ ] = "bcd";
    int res = strcmp(s1,s2);
    if(res>0)
        cout<<"greater";
    else if (res == 0)
        cout<<"Same";
    else    
        cout<<"Smaller";

    //strcpy

    char str1[5];
    strcpy(str1, "\nPtk");
    cout<<str1;
    return 0;
}