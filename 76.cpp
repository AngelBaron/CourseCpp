#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char pal[20],pal2[20];

    cout<<"Digite una palabra ";
    cin.getline(pal,20,'\n');

    strcpy(pal2,pal);

    strrev(pal2);

    if(strcmp(pal,pal2)==0){
        cout<<"La palabra es polindroma ";
    }
    else{
        cout<<"La palabra no es palindroma";
    }


    getch();    
    return 0;
}
