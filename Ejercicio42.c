#include <stdio.h>
int main() {
    int i, prom;
    //Se declara un array con 100 espacios de memoria para cubrir todos los elementos buscados de la serie de Fibinacci: 
    int fib[100];
    int sum=0;
    int cont=0;
    //Se declaran los valores de los 2 primeros espacios de memoria de la serie de fibonacci, pues a partir de estos se iniciara un bucle:
    fib[0] = 0;
    fib[1] = 1;
    //Empleando un bucle 'for', se realizara el calculo de los elementos de la serie siguiendo la formula 'Fn = Fn-1 + Fn-2':
    for (i = 2; i <=100; i++) {
        //Se redacta la formula dada para hallar el siguiente elemento en la serie, sumando los dos primeros elem'entos del array declarados previamente. 
        //Y por cada iteracion se suma el elemto previo hallado con el que le antecede. De esta manera se obtendran los elementos de la serie hasta llegar al elemento numero 100:
        fib[i] = fib[i-1] + fib[i-2];
        }
    printf("Los elementos menores a 1000, de la serie de fibonacci son:\n");
    //Se enmplea otro ciclo 'for' para imprimir en pantalla todos los elementos de la serie:
    for (i=0; i<=100;i++) {
        printf("%d ", fib[i]);
        //Por cada iteracion o por cada elemento a imprimir, un contador definido previamente se ira sumando. Esto con el objetivo de obtener la cantidad de elementos de la serie:
        cont++;
        //De igual manera por cada iteracion una suma acumulativa ira almacenando la adicion de cada uno de los elementos de la serie
        sum=sum+fib[i];
        //Se establece un condicional 'if' y un 'break' para limitar la impresion, el conteo y la suma iterativa de los elementos de la serie, antes de que se llegue a un elemento mayor 1000:
        if(fib[i]>900){
            break;
        }
    }
    //Se imprimira en pantalla la cantidad de elementos menores a 1000 de la serie, y la suma de los mismos: 
    printf("\nLa suma de los elementos menores a 1000 de la serie de fibonachi es: %d ",sum);
    printf("\nLa scantidad de elementos menores a 1000 de la serie de fibonachi es: %d ",cont);
    //Se redacta el calculo del promedio diviendo la suma de los elementos de la serie menores a 1000, para la cantidad de los mismos.
    //Se resta una unidad al contador o a la cantidad de elementos de la serie, pues no se tendra en cuenta el elemento '0' para el calculo del promedio:
    prom=sum/(cont-1);
    //Se imprime el promedio calculado de los elementos menores a 1000 de la serie de Fibonacci: 
    printf("\nEl promedio de la serie Fibonacci con los elementos menores a 1000 y sin considerar el 0 es: %d",prom);
    return 0;
}