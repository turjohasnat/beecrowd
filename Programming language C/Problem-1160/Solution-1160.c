//C Solution:
#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for ( int i = 1; i <= t; i++ ){
        int population_a, population_b, count = 0;
        scanf("%d %d", &population_a, &population_b);
        double gr_a, gr_b;
        scanf("%lf %lf", &gr_a, &gr_b);
        while(population_a <= population_b){
            population_a *= gr_a/100.0 + 1.0;
            population_b *= gr_b/100.0 + 1.0;
            count++;
            if ( count > 100 ){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if ( count <= 100 ) printf("%d anos.\n", count );
    }
    return 0;
}
