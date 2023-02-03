#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[3][3], cont=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero en ["<<i<<"] ["<<j<<"]  ";
            cin>>num[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<num[i][j];
        }
        cout<<endl;
    }
    cout<<" MATRIZ TRANSPUESTA "<<endl;
    int num2[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            num2[j][i]=num[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<num2[i][j];
        }
        cout<<endl;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(num[i][j]==num2[i][j]){
                cont +=1;
            
            }
        }
        
    }
    if(cont==9){
        cout<<"La matriz es simetrica";
    }
    else{
        cout<<"La matriz no es simetrica ";
    }

    getch();
    
    return 0;
}
