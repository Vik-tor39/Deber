#include<stdio.h>
int main(){
    //Se declara una variable donde se almacenara el numero añadido por el usuario:
    int n;
    //Se pide al usuario ingresar un numero entero, y este mismo se almacenara en la variable definida previamente: 
    printf("Ingrese un numero entero:\n");
    scanf("%d",&n);
    //Se emplea un condicional 'if' para verificar si el numero ingresado es negativo:
    if(n<0){
        //En caso de que la condicion sea verdadera, se imprime un mensaje y finaliza el codigo:
        printf("Por favor, reinicie el programa e ingrese un numero entero positivo");
    }
    else{
        //En caso de que la condicion sea falsa, se ejecuta el siguiente espacio de codigo:
        printf("Los numeros pares comprendidos desde el 1 hasta su numero ingresado(n) son:\n");
        //Se genera un bucle empleando una sentencia repetitiva 'for' para recorrer todos los numeros entre el 1 y el numero ingresado:
        for(int i=1;i<=n;i++){
            //Se usara el módulo de la división de todos los numeros por 2 para verificar si son pares:
            if(i%2==0){
                //Si la condicion es verdadera, se imprimiran todos los numeros pares comprendidos desde el 1 hasta el numero dado:
                printf("%d ",i);
            }
        }
    }
    
    return 0;
}