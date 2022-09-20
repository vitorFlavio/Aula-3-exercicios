#include<stdio.h>
#include<stdlib.h>



int main(){

    int qnt,i,num,x=0;

    printf("Informe a quantidade de numeros que sera lido\n");
    scanf("%d",&qnt);

    for(i=1;i<=qnt;i++){
        
        printf("Informe o %d° numero\n",i);
        scanf("%d",&num);
    if(i==1){

        x=num;
    }

    if(num>=x){

        x=num;

    }

    }

    printf("O maior numero é: %d",x);

    return 0;
}