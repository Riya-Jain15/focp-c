//wap to accept a coordinate point in xy coordinate system and determine in which quadrant the coordinate point lies.
#include<stdio.h>

int main() {
    int x, y;
    printf("Enter the x and y coordinate");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0) {
        printf("The point (0, 0) is at the origin.\n");
    } 
    else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    } 
    else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    } 
    else if (x > 0 && y > 0) {
        printf("The point lies in Quadrant I.\n");
    } 
    else if (x < 0 && y > 0) {
        printf("The point lies in Quadrant II.\n");
    } 
    else if (x < 0 && y < 0) {
        printf("The point lies in Quadrant III.\n");
    } 
    else if (x > 0 && y < 0) {
        printf("The point lies in Quadrant IV.\n");
    }

    return 0;

}