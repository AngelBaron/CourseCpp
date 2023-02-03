#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float nota1,nota2,nota3, total = 0, p1=0,p2=0,p3=0;

    cout<<"Dame la nota 1: "; cin>>nota1;
    cout<<"Dame la nota 2: "; cin>>nota2;
    cout<<"Dame la nota 3: "; cin>>nota3;

    p1=(nota1*30)/100;
    p2=(nota2*60)/100;
    p3=(nota3*10)/100;

    total= p1 + p2 + p3;
    cout<<p1<<","<<p2<<","<<p3;
    cout<<"\nEl promedio del alumno es: "<<total<<endl;

    return 0;
}
