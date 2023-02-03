#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,n1=1,n2=1,aux=1;
    cout<<"Dame el valor de n: ";
    cin>>n;
    for(int i=1;i<=n;i++){

        cout<<","<<n1<<" , "<<n2<<endl;
        n1=n1+n2;
        n2=n1+n2;



    }
    getch();

    return 0;
}