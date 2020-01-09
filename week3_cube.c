#include <stdio.h>
#include <stdlib.h>

int main() {
    float length;

    //read the edge length of a cube (as a decimal number)
    scanf("%f", &length);

    // calculate the volume and the surface area
    float volume = length * length * length;
    float surface_area = 6 * length * length;

    //print the volume and the surface area with two digits after the decimal point
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surface_area);

    return 0;
}
