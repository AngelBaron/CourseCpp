#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, conteo=0;
    do{
        cout<<"Dame un numero: ";
        cin>>num;

        if(num>0){
            conteo=conteo+1;

        }



    }while(num!=0);

    cout<<"Vceces mayores a 0: "<<conteo;




    getch();
    return 0;
}
