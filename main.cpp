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

/// palindrome
bool palindrome(char *cadena){
    char *fin= cadena + tam_cad(cadena) - 1;
    while(fin > cadena && *fin==*cadena){
        fin--;
        cadena++;
    }
    return *fin==*cadena;
}

/// invertir
void inv_cad(char *cadena){
    char *fin= cadena + tam_cad(cadena) - 1;
    while(fin > cadena){
        char inv=*cadena;
        *cadena=*fin;
        *fin=inv;
        fin--;
        cadena++;
    }
}

int main(){
    char cadena[]={'h','o','l','a','\0'};
    char cadena1[]= "hola!!";
    char cadena3[]="ana";
    cout<< tam_cad(cadena1);
    cout<<rec_tam(cadena1);
    inv_cad(cadena1);
    if(palindrome(cadena3))
        cout<<"Es palindrome";
    else
        cout<<"No es palindrome";
}
