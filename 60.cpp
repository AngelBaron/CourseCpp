#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[2][2]={{1,2},{3,4}}, num2[2][2];
    cout<<"Matriz original"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<num[i][j];
            num2[i][j]=num[i][j];
        }
        cout<<endl;
    }
    cout<<"Matriz copia"<<endl;
     for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<num2[i][j];
        }
        cout<<endl;
    }
    getch();
    return 0;
}
