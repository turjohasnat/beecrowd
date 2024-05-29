//C Solution:
#include<stdio.h>

int main(){
    int product_code_1,product_code_2,number_of_product_1,number_of_product_2;
    float price_1,price_2,result;
    scanf("%d ",&product_code_1);
    scanf("%d",&number_of_product_1);
    scanf("%f",&price_1);
    scanf("%d ",&product_code_2);
    scanf("%d",&number_of_product_2);
    scanf("%f",&price_2);
    result = (number_of_product_1*price_1)+(number_of_product_2*price_2);
    printf("VALOR A PAGAR: R$ %.2f\n",result);
    return 0;
}
