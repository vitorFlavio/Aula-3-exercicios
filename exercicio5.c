#include<stdio.h>
#include<stdlib.h>



int main(){


    int i,x=0;
    float num,soma=0,media=0;

   

    for(i=1;i<=50;i++){
        
        printf("Informe o %d° numero\n",i);
        scanf("%f",&num);

        soma+=num;
        x++;
        

    }
    media=soma/x;

    printf("A media é: %f",media);

   

    return 0;
}