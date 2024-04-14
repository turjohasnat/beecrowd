#include<stdio.h>

int main(){
    char name[10];
    float salary,commition,total_salary;
    scanf("%s",&name);
    scanf("%f",&salary);
    scanf("%f",&commition);
    total_salary=salary+((commition*15)/100);
    printf("TOTAL = R$ %.2f\n",total_salary);
    return 0;
}
