//C Solution:
#include<stdio.h>
int main() {
    int n, par_count = 0, impar_count = 0;
    int par[5];
    int impar[5];
    for (int i = 0; i < 15; i++) {
        scanf("%d", &n);       
        if (n % 2 == 0) {
            par[par_count] = n;
            par_count++;
            if (par_count == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                par_count = 0;
            }
        } else {
            impar[impar_count] = n;
            impar_count++;
            if (impar_count == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                impar_count = 0;
            }
        }
    }
    for (int i = 0; i < impar_count; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (int i = 0; i < par_count; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}
