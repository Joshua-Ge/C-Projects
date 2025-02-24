#include <stdio.h>
#include <string.h>

int main(void) {

    float res = 0;
    float volt = 0;
    float cur = 0;
    float answer = 0;
    char decider[100];

    printf("What is the unit that your looking for (res/vol/cur)");
    fgets(decider, sizeof decider, stdin);
    printf("%s", decider);

    if (strcmp(decider, "res\n") == 0) {
        printf("Enter volts in volts");
        scanf("%f", volt);
        printf("Enter current in Amps");
        scanf("%f", cur );
        answer = volt / cur;
        printf("resistance: %f", answer);
    } else if (strcmp(decider, "vol\n") == 0) {
        printf("Enter resistance in ohms");
        scanf("%f", res);
        printf("Enter current in Amps");
        scanf("%f", cur );
        answer = res * cur;
        printf("volts: %f", answer);
    } else if (strcmp(decider, "cur\n") == 0 ) {
        printf("Enter volts in volts");
        scanf("%f", volt);
        printf("Enter resistance in ohms");
        scanf("%f", res);
        answer = volt / res;
        printf("current: %f", answer);
    } else {
        printf("pick the correct value");
    }
}
