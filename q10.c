#include<stdio.h>
int main(){
    float c,pay;
    printf("Enter the power consumed by a customer(in unit) :");
    scanf("%f",&c);

    if (c>=0 && c<=200){
        pay= c*0.5;

        printf("The customer has to pay:%f",pay);

    }
    else if (c> 200 && c<=400){
        pay= 100 + 0.65*(c-200);
        printf("The customer has to pay:%f",pay);
    }
    else if (c> 400 && c<=600){
        pay= 230 + 0.80 *(c-400);
        printf("The customer has to pay:%f",pay);
}
    else if (c>600){
        pay= 390 + 1.00*(c-600);
        printf("The customer has to pay:%f",pay);
    }
    else{
        printf("Invalid Input");
    }

    return 0;
}