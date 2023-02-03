#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float nota1,nota2,nota3,nota4, media = 0;

    cout<<"Dame la nota del primer alumno: "; cin>>nota1;
    cout<<"Dame la nota del segundo alumno: "; cin>>nota2;
    cout<<"Dame la nota del tercer almuno: "; cin>>nota3;
    cout<<"Dame la nota del cuarto alumno: "; cin>>nota4;

    media = (nota1 + nota2 + nota3 + nota4)/4;

    cout<<"\nEl promedio de los 4 alumnos es: "<<media<<endl;
    return 0;
}
