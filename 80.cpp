#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char pal[20];

    cout<<"Digita tu nombre en mayusculas ";
    cin.getline(pal,20,'\n');

    if(strncmp(pal,"A",1)==0){
        strlwr(pal);
        cout<<pal<<endl;
    }
    else{
        cout<<pal<<endl;
    }




    getch();   
    return 0;
}
