#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[5]={1,2,3,4,5};

    for(int i=0; i<5; i++){
        cout<<"Para el indice "<<i<<" Tiene el vector:  "<<num[i]<<endl;
    }

    return 0;
}
