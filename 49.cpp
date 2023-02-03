#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[]={1,2,3,4,5};
    int suma =0;

    for(int i= 0; i<5;i++){
        suma = suma + num[i];
    }

    cout<<"El resultado es: "<<suma<<endl;



    getch();
    return 0;
}
