#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char letra;

    cout<<"Escriba una vocal "; cin>>letra;

    switch(letra){
        case 'a': cout<<"La vocal "<<letra<<" es minuscula";
        break;

        case 'e': cout<<"La vocal es minuscula";
        break;

        case 'i': cout<<"La vocal es minuscula";
        break;

        case 'o': cout<<"La vocal es minuscula";
        break;

        case 'u': cout<<"La vocal es minuscula";
        break;

        case 'A': cout<<"La vocal "<<letra<<"es mayuscula";
        break;

        case 'E': cout<<"La vocal es mayuscula";
        break;

        case 'I': cout<<"La vocal es mayuscula";
        break;

        case 'O': cout<<"La vocal es mayuscula";
        break;

        case 'U': cout<<"La vocal es mayuscula";
        break;

        default: cout<<"No es una vocal.";
        break;

        
    }
    return 0;
}
