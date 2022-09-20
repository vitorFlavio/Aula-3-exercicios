#include<stdio.h>
#include<stdlib.h>



int main(){

    int i,num,soma=0;


    for(i=1;i<=100;i++){
        
        printf("Informe o %d° numero\n",i);
        scanf("%d",&num);


    if(num%2==0){

        soma+=num;

    }

    }

    printf("A soma do numeros pares é: %d",soma);

    return 0;
}