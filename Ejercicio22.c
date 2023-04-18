#include<stdio.h>
int main(){
    //Se declara un string de caracteres para almacenar el dato numerico ingresado por el usuario:
    char num[50];
    //Se declara una variable contador con valor de '0' para sumar la cantidad de veces que se repite el digito '1':  
    int crc=0;
    printf("Ingrese un numero entero positivo: ");
    //Se almacena el dato numerico ingresado por el usuario en el string declarado previamente:
    scanf("%s",num);
    //Se declara un puntero de caracteres que servira como variable iteradora: 
    char *i;
    //Se asigna la dirección de memoria del string al puntero:
    i=num;
    //Con el puntero conteniendo la direccion de memoria del string y con un 'for' se recorrer cada uno de los elementos ingresados:
    for(*i=num[0];*i!='\0';*i++){
        //Se plantea una condicion 'if' para limitar el alfabeto ASCII unicamente a caracteres numéricos del 0 al 9: 
        if (*i<48 || *i>57){
            //Si la condicion es verdadera se muestra un mensaje y se dejara de ejecutar el programa empleando el comando 'exit (0)':
            printf("El dato que usted a ingresado no es un numero entero positivo en su totalidad. Por favor reinicie el programa, e ingrese unicamente un numero entero positivo.");
            exit (0);
        }
        //Si los datos ingresados pasan el filtro del condcional anterior, se procede con otro condicional 'if': 
        if(*i=='1'){
            //Este condicional comparara cada uno de los elementos del string contenidos en el puntero con el '1'
            //Si se cumple la condicion dada, se ira sumando un contador que permitira conocer el numero de veces que se repite el '1':  
            crc=crc+1;
        }
    }
    //Finalmente se imprime la cantidad de veces que se repite el digito '1' en el numero ingresado:
    printf("El numero de veces que se repite el digito '1' en el numero ingresado es: %d",crc);
    return 0;
}