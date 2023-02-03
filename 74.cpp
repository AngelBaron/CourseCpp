#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char cad1[]="Hola que tal ";
    char cad2[20];
    char cad3[40];

    cout<<"¿Cual es tu nombre? ";
    cin.getline(cad2,20,'\n');

    strcpy(cad3,cad1);

    strcat(cad3,cad2);

    cout<<cad3<<endl;



    getch();    
    return 0;
}
