#include <stdio.h>

int main() {
    int usage[3][12]; 
    int annualUsage[3] = {0}; 
    int maxUsage = 0, maxHousehold = 0;


    for (int i = 0; i < 3; i++) {
        printf("Enter electricity usage (in kWh) for Household %d over 12 months:\n", i + 1);
        for (int j = 0; j < 12; j++) {
            printf("Month %d: ", j + 1);
            scanf("%d", &usage[i][j]);
            annualUsage[i] += usage[i][j]; 
        }
    }

    
    for (int i = 0; i < 3; i++) {
        if (annualUsage[i] > maxUsage) {
            maxUsage = annualUsage[i];
            maxHousehold = i + 1; 
        }
    }

    
    printf("\nAnnual electricity usage for each household:\n");
    for (int i = 0; i < 3; i++) {
        printf("Household %d: %d kWh\n", i + 1, annualUsage[i]);
    }
    printf("\nHousehold %d has the highest annual electricity usage: %d kWh\n", maxHousehold, maxUsage);

    return 0;
}
