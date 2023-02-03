#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Cuantos datos quieres ";
    cin>>n;

    int vect[n], vect2[n];

    for(int i=0; i<n; i++){
        cout<<"Digite el dato ";
        cin>>vect[i];
        vect2[i]=vect[i]*2;
    }

    for(int i=0; i<n; i++){
        cout<<i+1<<".-"<<vect2[i]<<endl;
    }



    getch();
    return 0;
}
