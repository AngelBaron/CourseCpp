#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,x,s,c=0;
    cout<<"Cuantos  datos quieres en el vector 1 ";
    cin>>n;

    cout<<"Cuantos datos quieres en el vector 2 ";
    cin>>x;

    char vect1[n];
    char vect2[x];

    for(int i=0; i<n; i++){
        cout<<"Digite el caracter "<<i+1<<endl;
        cin>>vect1[i];
        
    }

        for(int i=0; i<x; i++){
        cout<<"Digite el caracter "<<i+1<<endl;
        cin>>vect2[i];
        
    }
    s=n+x;
    char vect3[s];

    for(int i=0; i<s; i++){
        if(i>n-1){
            vect3[i]=vect2[c];
            c++;
        }
        else{
            vect3[i]=vect1[i];
        }
        cout<<vect3[i];
    }
    
    cout<<endl;

    system("Pause");
    return 0;
}
