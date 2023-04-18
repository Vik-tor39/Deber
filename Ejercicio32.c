#include<stdio.h>
int main(){
    int num,i, prom;
    int cont=0;
    int cont1=0;
    int sum=0;
    do{
        printf("Ingrese un numero\n");
        scanf("%d",&num);
        cont=0;
        for(i=1;i<=num;i++){
            if(num%i==0){
                cont++;
            }
        }
        if(cont==2 && num!=1){
            sum=sum+num;
            cont1++;
        }
    }while(num!=0);
    if(cont1==0){
        printf("No se ingreso ningun numero primo. Por favor reinicie el código e ingrese un numero primo.");
    }
    else{
        prom=sum/cont1;
        printf("El promedio de los numeros primos es: %d",prom);
    }
    return 0;
}