#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char palabra[100];
    int lon;
    cout<<"Digite caracteres: ";
    cin.getline(palabra,100,'\n');

    lon=strlen(palabra);

    if(lon>10){
        cout<<"Lo que escribió supera los 10 caracteres: "<<lon<<endl;
    }
    else{
        cout<<"No superó los 10 caracteres: "<<lon<<endl;
    }

    getch();


    return 0;
}
