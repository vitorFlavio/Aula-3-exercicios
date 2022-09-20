#include<stdio.h>
#include<stdlib.h>



int main(){

    int i,num,par=0,imp=0;

   

    for(i=1;i<=60;i++){
        
        printf("Informe o %d° numero\n",i);
        scanf("%d",&num);

        if(num%2==0){
           
            par++;

        }else{

            imp++;

        }

      

    }
   

    printf("Pares:%d\nImpares:%d",par,imp);

   

    return 0;
}