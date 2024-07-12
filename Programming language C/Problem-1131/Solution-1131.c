//C Solution:
#include <stdio.h>
int main() {
    int team_1, team_2;
    int count = 0, count_1 = 0, count_2 = 0, count_3 = 0;

    while (1) {
        scanf("%d %d", &team_1, &team_2);
        count++;

        if (team_1 > team_2) {
            count_1++;
        } else if (team_1 < team_2) {
            count_2++;
        } else {
            count_3++;
        }

        int x;
        do {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &x);
        } while (x != 1 && x != 2);

        if (x == 2) break;
    }

    printf("%d grenais\n", count);
    printf("Inter:%d\n", count_1);
    printf("Gremio:%d\n", count_2);
    printf("Empates:%d\n", count_3);

    if (count_1 > count_2) {
        printf("Inter venceu mais\n");
    } else if (count_1 < count_2) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }

    return 0;
}
