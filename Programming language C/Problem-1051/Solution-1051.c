//C Solution:
#include<stdio.h>

int main(){
    float salary, tax1;
    scanf("%f", &salary);

    if ( salary >= 0.00 && salary <= 2000.00 ){
        printf("Isento\n");
    }
    else if ( salary >= 2000.01 && salary <= 3000.00 ){
        tax1 = salary - 2000.00;
        tax1 = tax1 * 0.08; 
        printf("R$ %.2f\n",tax1);
    }
    else if ( salary >= 3000.01 && salary <= 4500.00 ){
        tax1 = salary - 2000.00;
        tax1 = 1000.00 * 0.08;
        tax1 = tax1 + (( salary - 3000.00 ) * 0.18 );
        printf("R$ %.2f\n",tax1);
    }
    else if ( salary > 4500.00 ){
        tax1 = salary - 2000.00;
        tax1 = 1000.00 * 0.08;
        tax1 = tax1 + (( 4500.00 - 3000.00 ) * 0.18 );
        tax1 = tax1 + (( salary - 4500.00 ) * 0.28 );
        printf("R$ %.2f\n",tax1);
    }

    return 0;

}
