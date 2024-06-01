//C Solution:
#include<stdio.h>

int main(){
    float x,y, total_bill;
    scanf("%f %f", &x, &y);
    if ( x == 1 ){
        total_bill = 4 * y;
        printf("Total: R$ %.2f\n",total_bill);
    }
    else if ( x == 2 ){
        total_bill = 4.50 * y;
        printf("Total: R$ %.2f\n",total_bill);
    }
    else if ( x == 3 ){
        total_bill = 5 * y;
        printf("Total: R$ %.2f\n",total_bill);
    }
    else if ( x == 4 ){
        total_bill = 2 * y;
        printf("Total: R$ %.2f\n",total_bill);
    }
    else if ( x == 5 ){
        total_bill = 1.50 * y;
        printf("Total: R$ %.2f\n",total_bill);
    }
    return 0;
}
