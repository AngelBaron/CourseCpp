#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[3][3], num2[3][3], num3[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero ["<<i<<"] ["<<j<<"] ";
            cin>>num[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero ["<<i<<"] ["<<j<<"] ";
            cin>>num2[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            num3[i][j]=num[i][j]+num2[i][j];
            cout<<num3[i][j]<<" ";
        }
        cout<<endl;
    }


    system("Pause");

    return 0;
}
