#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"MATRIZ ORIGINAL"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }    

    cout<<"MATRIZ TRANSPUESTA"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<num[j][i]<<" ";
        }
        cout<<endl;
    }

    getch();
    return 0;
}
