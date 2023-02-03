#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[3][3]={{1,2,3},{4,5,6},{7,8,9} };

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            if(i==j){
                cout<<num[i][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    getch();
    return 0;
}