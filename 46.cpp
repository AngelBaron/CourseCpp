#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int cont=0,ulti=0,uno=0, res, alcont=0;

    for(int i=1; i<=5; i++){
        cout<<"ALUMNO NUMERO: "<<i<<endl;
        cont=0;
        for(int j= 1; j<=3; j++){
            cout<<"Dame la nota numero: "<<j<<endl;
            cin>>res;

            if(j==3){
                if(cont==0 & res>5){
                    ulti += 1;
                    
                }
            }
            if(res>5){
                cont +=1;
            }

        }
        if(cont==3){
            alcont +=1;    
        }
        if(cont>=1){
            uno +=1;
        }
    }

    cout<<"ALUMNOS QUE APROBARON TODOS LOS EXAMENES: "<<alcont<<endl;
    cout<<"ALUMNOS QUE APROBARON AL MENOS UN EXAMEN: "<<uno<<endl;
    cout<<"ALUMNOS QUE APROBARON UNICAMENTE EL ULTIMO EXAMEN: "<<ulti<<endl;
    



    return 0;
}
