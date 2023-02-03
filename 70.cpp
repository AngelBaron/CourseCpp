#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char palabra[50],palabra2[50];

    cout<<"Dame una cadena de caracteres: ";
    cin.getline(palabra,50,'\n');

    strcpy(palabra2,palabra);

    cout<<"\n"<<palabra2<<endl;

    getch();    
    return 0;
}
