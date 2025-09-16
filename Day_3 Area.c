#include <stdio.h>

#define PI 3.14159 

int main() {
    int choice;
    float radius, length, width, side;
    float area, perimeter;

    printf("Choose a shape to calculate area and perimeter:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            perimeter = 2 * PI * radius; // Circumference is the perimeter of a circle
            printf("Area of circle: %.2f\n", area);
            printf("Perimeter of circle: %.2f\n", perimeter);
            break;
        case 2: 
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            perimeter = 2 * (length + width);
            printf("Area of rectangle: %.2f\n", area);
            printf("Perimeter of rectangle: %.2f\n", perimeter);
            break;
        case 3: 
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = side * side;
            perimeter = 4 * side;
            printf("Area of square: %.2f\n", area);
            printf("Perimeter of square: %.2f\n", perimeter);
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
            break;
    }

    return 0;
}
