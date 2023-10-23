#include <stdint.h>
#include <stdio.h>
#define pi 3.14

int main()

{

    int number1;
    int number2;
    int number3;

    printf("Lutfen ilk sayinizi giriniz = \n");
    scanf("%d",&number1);
    printf("Lutfen ikinci sayinizi giriniz = \n");
    scanf("%d",&number2);
    printf("Lutfen ucuncu sayinizi giriniz = \n");
    scanf("%d",&number3);
    
    if ( number1 == number2 && number3 == number1) {
        printf(" sectiginiz sayilar olan %d %d %d birbirlerine esit \n",number1,number2,number3);
    }
    else {
            if(number1 == number2 && number3 != number1 ){
                if (number1 > number3) {
                    printf("siralama %d = %d > %d seklindedir \n",number1,number2,number3);
                }
                else {
                    printf("siralama %d > %d = %d seklindedir \n",number3,number1,number2);
                }
            }
            if(number2 == number3 && number1 != number2){
                if (number2 > number1) {
                    printf("siralama %d = %d > %d seklindedir \n",number2,number3,number1);
                }
                else {
                    printf("siralama %d > %d = %d seklindedir \n",number1,number2,number3);
                }
            }
            if(number1 == number3 && number2 != number1){
                if (number1 > number2) {
                    printf("siralama %d = %d > %d seklindedir \n",number1,number3,number2);
                }
                else {
                    printf("siralama %d > %d = %d seklindedir \n",number2,number1,number3);
                }
            }
    }

    if ( number1 > number2 && number1!=number2 && number2!=number3)
    {
        if ( number2 > number3){
            printf("siralama boyledir %d > %d > %d \n",number1,number2,number3);
        }
        else{
            printf("siralama boyledir %d > %d > %d \n",number1,number3,number2);
        }
        
    }
    else if (number2 > number3 && number1!=number2 && number2!=number3)
    {
        if (number1 > number3){
            printf("siralama boyledir %d > %d > %d \n",number2,number1,number3);
        }
        else{
            printf("siralama boyledir %d > %d > %d \n",number2,number3,number1);
        }    
    }
    else if ( number3 > number1 && number1!=number2 && number2!=number3)
    {
        if ( number1 > number2){
            printf("siralama boyledir %d > %d > %d \n",number3,number1,number2);
        }
        else{
            printf("siralama boyledir %d > %d > %d \n",number3,number2,number1);
        }  
    }
    printf("NE OLDU BULAMAMMI SANDIN :)");
           
    return 0;
}
