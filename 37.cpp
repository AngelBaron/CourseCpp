#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, suma=0;

    do{
        cout<<"Dame un valor";
        cin>>num;
        if (num>0)
        {
            suma=suma+num;
        }
        
    }while(num==0|(num<20 | num>30));

    cout<<"La suma es: "<<suma<<endl;

    getch();
    return 0;
}
