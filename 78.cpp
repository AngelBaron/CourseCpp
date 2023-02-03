#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char cad1[30];
    char cad2[30];

    cout<<"Digite una frase ";
    cin.getline(cad1,30,'\n');

    cout<<"Digite otra frase ";
    cin.getline(cad2,30,'\n');

    strupr(cad1);

    strupr(cad2);

    if(strcmp(cad1,cad2)==0){
        cout<<"Las palabras son iguales ";
    }
    else{
        cout<<"Las palabras no son iguales ";
    }

    getch();    
    return 0;
}
