#include <iostream>
#include <stdlib.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int num;
    do{
    cout<<"Digite un numero: ";
    cin>>num;

    }while ( (num<1)||(num>10));

    for (int i = 0; i <=20; i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }

    cout<<endl;

    system("pause");
    
     
    return 0;
}

