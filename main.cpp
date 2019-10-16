#include <iostream>

using namespace std;

///tamaño
int tam_cad(char *cadena){
    int tam=0;
    while(*cadena++ != '\0'){
        tam++;
    }
    return tam;
}


/// tamaño recursivo
int rec_tam(char *cadena){
    if(*cadena == '\0')
        return 0;
    return 1+rec_tam(++cadena);
}

/// invertir
int inv_cad(char *cadena){
    char inv=0;
    char *final= cadena - tam_cad(cadena) - 1;
    while(final > cadena){
        inv=*cadena;
        cadena=final;
        *final=inv;
        final--;
        cadena++;
    }
}
int main(){
    char cadena[]={'h','o','l','a','\0'};
    char cadena1[]= "hola!!";
    cout << inv_cad(cadena);
}


