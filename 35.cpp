#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0;

    for(int i = 0; i<=10; i++){

        suma=suma+(pow(i,2));

        cout<<"La suma "<<i<<" : "<<suma<<endl;

    }
    return 0;
}
