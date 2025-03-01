#include <stdio.h>

#define PRICE_PER_KWH 4.0

int main() {
    float kWh, total_cost;
    printf("Enter electricity consumption (in kWh): ");
    scanf("%f", &kWh);
    total_cost = kWh * PRICE_PER_KWH;
    printf("\n\n\nTotal electricity bill: %.2f DZD\n\n\n", total_cost);
    return 0;
}
