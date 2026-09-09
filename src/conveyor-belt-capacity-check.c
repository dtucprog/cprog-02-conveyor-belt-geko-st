#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    /// SOLUTION BEGIN
    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);

    printf("How many kg of packages do we expect?\n");
    scanf("%d", &totalPackageWeight);

    if (totalPackageWeight <= MOTOR_CAPACITY * motorCount) {
        printf("Yes! The conveyor belt can carry the packages.");
    } else {
        printf("No. The conveyor belt cannot carry the packages.");
    }
    /// SOLUTION END
}
