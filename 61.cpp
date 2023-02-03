#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int fil,col;
    srand(time(NULL));

    cout<<"Cuantas filas quieres ";
    cin>>fil;

    cout<<"Cuantas columnas quieres ";
    cin>>col;

    int num[fil][col];

    for(int i=0; i<fil; i++){
        for(int j=0; j<col; j++){
            num[i][j]= 1+ rand()%(100);
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }

    getch();
    return 0;
}
