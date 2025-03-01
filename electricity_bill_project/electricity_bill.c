#include <stdio.h>

#define PRICE_PER_KWH 4.0

int main() {
    float kWh, total_cost;

    do {
        printf("Enter electricity consumption (in kWh): ");
        scanf("%f", &kWh);

        if (kWh < 0) {
            printf("\n\n\nA7ki Mliiih\n\n\n");
        }

    } while (kWh < 0);

    total_cost = kWh * PRICE_PER_KWH;
    printf("\n\n\nTotal electricity bill: %.2f DZD\n\n\n", total_cost);

    return 0;
}
