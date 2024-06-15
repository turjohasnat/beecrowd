//C Solution:
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int animal;
    char animal_type;
    int total_animal = 0, total_frogs = 0, total_rats = 0, total_rabbits = 0;
    double p_frogs, p_rats, p_rabbits;

    for ( int tc = 1; tc <= n; tc++){
        scanf("%d %c", &animal, &animal_type);

        if ( animal_type == 'C' ){
            total_rabbits = total_rabbits + animal;
        }
        else if ( animal_type == 'R' ){
            total_rats = total_rats + animal;
        }
        else if ( animal_type == 'S' ){
            total_frogs = total_frogs + animal;
        }

    }
    total_animal = total_rabbits + total_frogs + total_rats;

    p_frogs =  (total_frogs / (total_animal * 1.0)) * 100.00;
    p_rats =  (total_rats / (total_animal * 1.0)) * 100.00;
    p_rabbits = (total_rabbits / (total_animal * 1.0)) * 100.00;

    printf("Total: %d cobaias\n", total_animal);
    printf("Total de coelhos: %d\n", total_rabbits);
    printf("Total de ratos: %d\n", total_rats);
    printf("Total de sapos: %d\n", total_frogs);
    printf("Percentual de coelhos: %.2lf %%\n", p_rabbits);
    printf("Percentual de ratos: %.2lf %%\n", p_rats);
    printf("Percentual de sapos: %.2lf %%\n", p_frogs);

    return 0;

}
