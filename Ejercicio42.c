#include <stdio.h>
int main() {
    int i, prom;
    int fib[100];
    int sum=0;
    int cont=0;
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i <=100; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        }
    printf("Los elementos menores a 1000, de la serie de fibonacci son:\n");
    for (i=0; i<=100;i++) {
        printf("%d ", fib[i]);
        cont++;
        sum=sum+fib[i];
        if(fib[i]>900){
            break;
        }
    }
    printf("\nLa suma de los elementos menores a 1000 de la serie de fibonachi es: %d ",sum);
    printf("\nLa scantidad de elementos menores a 1000 de la serie de fibonachi es: %d ",cont);
    prom=sum/(cont-1);
    printf("\nEl promedio de la serie Fibonacci con los elementos menores a 1000 y sin considerar el 0 es: %d",prom);
    return 0;
}