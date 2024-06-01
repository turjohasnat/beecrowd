//C Solution:
#include<stdio.h>

int main(){
    double num1,num2,num3,num4, avg1;
    scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);

    avg1 = ((num1*2) + (num2*3) + (num3*4) + num4) / 10;
    printf("Media: %.1lf\n", avg1);

    if (avg1 >= 7){
        printf("Aluno aprovado.\n");
    }
    else if (avg1 < 5){
        printf("Aluno reprovado.\n");
    }
    else if (avg1 >= 5 && avg1 < 7){
        printf("Aluno em exame.\n");

        double num5, avg2;
        scanf("%lf", &num5);
        printf("Nota do exame: %.1lf\n",num5);

        avg2 = (avg1 + num5) / 2;
        if (avg2 >= 5){
            printf("Aluno aprovado.\n");
        }
        else if (avg2 < 5){
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", avg2);

    }
     
    return 0;
}
