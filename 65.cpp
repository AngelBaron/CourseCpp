#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1[3][3], num2[3][3];

    cout<<"MATRIZ 1: "<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite el numero ["<<i<<"]["<<j<<"] ";
            cin>>num1[i][j];
        }
        cout<<endl;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<num1[i][j];
        }
        cout<<endl;
    }

    cout<<"MATRIZ 2: "<<endl; 

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite el numero ["<<i<<"]["<<j<<"] ";
            cin>>num2[i][j];
        }
        cout<<endl;
    } 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<num2[i][j];
        }
        cout<<endl;
    }
    int num3[3][3];

    cout<<"R E S U L T A D O"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            num3[i][j]=0;
            for(int k=0; k<3; k++){
                num3[i][j]+=num1[i][k]*num2[k][j];
            }
            cout<<num3[i][j]<<" ";

        }
        cout<<endl;
    }
    getch();
    return 0;
}
