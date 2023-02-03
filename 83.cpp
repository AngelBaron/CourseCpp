#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char pal[30];
    int contA=0,contE=0,contI=0,contO=0,contU=0, lon;
    cout<<"Digite una frase ";
    cin.getline(pal,30,'\n');

    strupr(pal);

    lon=strlen(pal);

    for(int i=0; i<=lon; i++){
        if(pal[i]=='A'){
            contA += 1;
        }
        else if(pal[i]=='E'){
            contE +=1;
        }
        else if(pal[i]=='I'){
            contI +=1;
        }
        else if(pal[i]=='O'){
            contO +=1;
        }
        else if(pal[i]=='U'){
            contU +=1;
        }
        
    }

    cout<<"Vocal A: "<<contA<<endl;
    cout<<"Vocal E: "<<contE<<endl;
    cout<<"Vocal I: "<<contI<<endl;
    cout<<"Vocal O: "<<contO<<endl;
    cout<<"Vocal U: "<<contU<<endl;

    getch();    
    return 0;
}
