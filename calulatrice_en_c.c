#include <stdio.h>

int main (){
    int num =0;
    start:
      
    do{
       
        printf("choisir une operation:\n");
        printf("\t1+l'addition \n\t2+la soustraction \n\t3+la multiplication \n\t4+la divisio \n\t5+quite\n");
        scanf("%d",&num);

    }while(num < 0 || num > 5);
    if(num  == 5){
        return 0;
    }
        int a, b;
    printf("enterz nombre 1: \n");
    scanf("%d",&a);
    printf("enterz nombre 2:\n");
    scanf("%d",&b);
   
        
    switch(num){
        case 1: printf("l'addition %d + %d = %d\n", a, b, a + b);goto start ; 
        case 2: printf("l'addition %d - %d = %d\n", a, b, a - b);goto start ; 
        case 3: printf("l'addition %d * %d = %d\n", a, b, a * b);goto start ; 
        case 4: printf("l'addition %d / %d = %d\n", a, b, a / b);goto start ;        
    }

    return 0;
}  