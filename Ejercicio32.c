#include<stdio.h>
int main(){
    //Se declaran las variables enteras que serviran para guardar el numero ingresado por el usuario, para realizar un ciclo, y para realizar un conteo:
    int num,i, prom;
    int cont=0;
    int cont1=0;
    int sum=0;
    //Empleando un ciclo 'do-while' se leeran numeros ingresados por el usuario hasta que se ingrese el cero. Cada uno de estos numeros se someteran al siguiente espacio de codigo:
    do{
        printf("Ingrese un numero\n");
        scanf("%d",&num);
        //Cada vez que se itere el espacio de código el contador se reiniciara en cero:
        cont=0;
        //Se empleara un ciclo 'for' que se iterara desde el uno hasta el numero ingresado:
        for(i=1;i<=num;i++){
            //Si el residuo del numero ingresado dividido para cada uno de los numeros que recorre el ciclo 'for' es cero, se sumara el contador  
            if(num%i==0){
                cont++;
            }
        }
        //Con un condicional 'if' se seleccionaran unicamente los numeros que permitieron sumar al contador un resultado de 2
        //Se emplea esta logica pensando en que el residuo cero se obtuvo unicamente diviendo el numero para el uno, y para si mismo (concepto de numero primo)
        //Se considera que el numero seleccionado debe ser mayor a 1, pues aparte de que el 1 no es primo se trabajaran unicamente con numeros positivos
        if(cont==2 && num>1){
            //Se redactara una suma iterativa que ira acumulando la adicion de cada numero seleccionado como primo:
            sum=sum+num;
            //Se hace uso de un nuevo contador que se sumara por cada numero seleccionado, pues asi se sabra la cantidad de numeros primos encontrados:
            cont1++;
        }
    }while(num!=0);
    //Se emplea nuevamente un condicional 'if' para controlar una posible situacion en caso de que no exitan numeros primos:
    if(cont1==0){
        printf("No se ingreso ningun numero primo. Por favor reinicie el código e ingrese un numero primo.");
    }
    else{
        //Si existen numeros primos, se imprimira su suma y cuantos se encontraron
        printf("Los numeros primos encontrados fueron %d, y suma es igual a %d",cont1,sum);
        //Se redactara la formula para hallar su promedio dividiendo la suma de los primos para la cantidad encontrada de los mismos: 
        prom=sum/cont1;
        //Se imprime el promedio calculado:
        printf("\nEl promedio de los numeros primos es: %d",prom);
    }
        
    return 0;
}