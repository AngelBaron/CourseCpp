#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char cad[20];
    char cad2[20];

    int num;
    float num2, res;

    cout<<"Digite una cadena entera ";
    cin.getline(cad,20,'\n');

    cout<<"Digite otra cadena real ";
    cin.getline(cad2,20,'\n');

    num=atoi(cad);

    num2=atof(cad2);

    res=num+num2;

    cout<<"El resultado es: "<<res<<endl;




    getch();    
    return 0;
}
