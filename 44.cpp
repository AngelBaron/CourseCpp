#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,res=0,c;

    cout<<"Dame el valor de n"<<endl;
    cin>>n;


    for(int i=1;i<=n;i++){

        if(i%2==0){

            res=res-i;
            
        }
        else{
            res=res+i;
        }
    }

    cout<<"El resultado es: "<<res<<endl;


    system("Pause");


    return 0;
}
