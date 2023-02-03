#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Cuantos elementos quieres tener?";
    cin>>n;
    int num[n];

    for(int i=0; i<n; i++){
        cout<<"Digite el numero del vector "<<i;
        cin>>num[i];
    }  

    for(int i=0; i<n; i++){
        cout<<i<<"->"<<num[i]<<endl;
    }    
    getch();
    return 0;
}
