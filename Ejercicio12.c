#include<stdio.h>
int main(){
    //Se declara una variable donde se almacenara el numero de 3 digitos añadido por el usuario:
    int n;
    //Se declara un string de caracteres para almacenar el numero ingresado despues de ser transformado en caracteres:
    char numero[3];
    //Se pide al usuario ingresar un numero entero de 3 digitos, y este mismo se almacenara en la variable 'n': 
    printf("Ingrese un numero entero de 3 digitos: ");
    scanf("%d",&n);
    //Se emplea un condicional 'if' para controlar que el numero entero ingresado tenga obligatoriamente 3 digitos: 
    if(n>999 || n<100){
        printf("El numero ingresado tiene mas o menos de 3 digitos. Por favor, reinicie el programa e ingrese un numero de 3 digitos.");
    }
    //Si el numero ingresado tiene 3 digitos se ejecuta el siguiente espacio de codigo:
    else{
        //Se emplea el comando 'sprintf' para transformar el numero ingresado en un string de caracteres:
        sprintf(numero,"%d",n);
        //Se emplea un condicional 'if' para comparar cada uno de los elementos del string con el caracter '1':
        if (numero[2]=='1' || numero[1]=='1' || numero[0]=='1'){
        //Si la condicion se cumple se sabra si el numero ingresado tiene el digito '1':
        printf("El numero ingresado tiene el digito '1'");
        }
        else{
        //Si la condicion no se cumple el numero ingresado no tiene el digito '1':
        printf("El numero ingresado no contienen el digito'1'");
        }
    }
    
    return 0;
}