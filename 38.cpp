#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int x,y,res;

    cout<<"Dame el valor de x"<<endl;
    cin>>x;
    cout<<"Dame el valor de y"<<endl;
    cin>>y;
    res=x;
    if(y==0){
        cout<<"El resultado es: 1"<<endl;
    }
    else if(y==1){
        cout<<"El resultado es: "<<x<<endl;
    }
    else{
        for(int i=2; i<=y; i++){

            res=res*x;
            

        }
        cout<<"El resultado es: "<<res<<endl;
    }

    system("Pause");
    return 0;
}

