#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, cont=0, prim=0, res;

    cout<<"Dame el valor de n: "<<endl;
    cin>>n;

    for(int i=2; i<=n; i++){
        cont=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                cont+=1;
            }
            if(cont==2){
                prim=j;
            }
        }        

        
        while(n%prim==0){
            cout<<prim<<", ";
            if(n%prim==0){
                n=n/prim;
            }
        }
        


    }




    return 0;
}
