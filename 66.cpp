#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char palabra[]="Angel";
    char palabra2[]={'A','n','g','e','l'};
    char nombre[30];


    cout<<"Digite su nombre";

    cin.getline(nombre,20,'\n');
    cout<<nombre<<endl;

    getch();    
    return 0;
}
