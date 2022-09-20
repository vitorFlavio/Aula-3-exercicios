#include<stdio.h>
#include<stdlib.h>



int main(){

    int qnt,i;
    float num,soma=0,media=0;

    printf("Informe a quantidade de numeros que sera lido\n");
    scanf("%d",&qnt);

    for(i=1;i<=qnt;i++){
        
        printf("Informe o %d° numero\n",i);
        scanf("%f",&num);


        soma+=num;
        

    }
        media=soma/qnt;

    printf("A media é: %f",media);

    return 0;
}