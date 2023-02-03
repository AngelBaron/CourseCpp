#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[5]={1,2,3,4,5};
    int multi = 1;

    for(int i=0; i<5; i++){
        multi *=num[i];        
    }
    cout<<"El resultado es: "<<multi<<endl;

    system("Pause");
    
    return 0;
}
