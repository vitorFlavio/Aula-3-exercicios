#include<stdio.h>
#include<stdlib.h>



int main(){

    int i,num,menor=0,maior=0;


    for(i=1;i<=1000;i++){
        
        printf("Informe o %d° numero\n",i);
        scanf("%d",&num);
    if(i==1){

        menor=num;
        maior=num;

    }

    if(num>=maior){

        maior=num;

    }else if(num<=menor){

        menor=num;

    }

    }

    printf("O maior numero é: %d\nO menor numero é: %d",maior,menor);

    return 0;
}