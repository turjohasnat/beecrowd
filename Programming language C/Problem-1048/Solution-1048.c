//C Solution:
#include<stdio.h>

int main(){
    double old_salary, new_salary, increase_salary;
    scanf("%lf", &old_salary);

    if ( old_salary >= 0.00 && old_salary <= 400.00 ){
        increase_salary = old_salary * 0.15;
        new_salary = old_salary + increase_salary;

        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", increase_salary);
        printf("Em percentual: 15 %%\n");
    }
    else if ( old_salary > 400.00 && old_salary <= 800.00 ){
        increase_salary = old_salary * 0.12;
        new_salary = old_salary + increase_salary;

        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", increase_salary);
        printf("Em percentual: 12 %%\n");
    }
    else if ( old_salary > 800.00 && old_salary <= 1200.00 ){
        increase_salary = old_salary * 0.10;
        new_salary = old_salary + increase_salary;

        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", increase_salary);
        printf("Em percentual: 10 %%\n");
    }
    else if ( old_salary > 1200.00 && old_salary <= 2000.00 ){
        increase_salary = old_salary * 0.07;
        new_salary = old_salary + increase_salary;

        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", increase_salary);
        printf("Em percentual: 7 %%\n");
    }
    else if ( old_salary > 2000.00 ){
        increase_salary = old_salary * 0.04;
        new_salary = old_salary + increase_salary;

        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", increase_salary);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
