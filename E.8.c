#include <stdio.h>


struct Apartment {
    int apartmentNumber;
    float squareFeet;
    float rent;
};

int main() {
    struct Apartment apartments[4]; 
    float maxRentPerSquareFoot = 0.0; 
    int maxApartmentIndex = 0; 

    
    for (int i = 0; i < 4; i++) {
        printf("Enter details for Apartment %d:\n", i + 1);
        printf("Apartment Number: ");
        scanf("%d", &apartments[i].apartmentNumber);
        printf("Square Feet: ");
        scanf("%f", &apartments[i].squareFeet);
        printf("Rent: ");
        scanf("%f", &apartments[i].rent);
    }

    for (int i = 0; i < 4; i++) {
        float rentPerSquareFoot = apartments[i].rent / apartments[i].squareFeet;

        if (rentPerSquareFoot > maxRentPerSquareFoot) {
            maxRentPerSquareFoot = rentPerSquareFoot;
            maxApartmentIndex = i;
        }
    }

    
    printf("\nApartment with the highest rent per square foot:\n");
    printf("Apartment Number: %d\n", apartments[maxApartmentIndex].apartmentNumber);
    printf("Square Feet: %.2f\n", apartments[maxApartmentIndex].squareFeet);
    printf("Rent: %.2f\n", apartments[maxApartmentIndex].rent);
    printf("Rent per Square Foot: %.2f\n", maxRentPerSquareFoot);

    return 0;
}
