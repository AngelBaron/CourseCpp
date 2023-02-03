#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char nombre[] = "Alejandro";
    char nombre2[20];

    strcpy(nombre2,nombre);

    cout<<nombre2<<endl;


    getch();    
    return 0;
}
