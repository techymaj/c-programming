// Write a program that outputs the equation of the perpendicular bisector of the line segment between two points.
// The program should ask the user to enter the coordinates of the two points and then output the equation of the perpendicular bisector.
// The equation of the perpendicular bisector is of the form y = mx + b, where m is the slope and b is the y-intercept.
// The slope of the perpendicular bisector is the negative reciprocal of the slope of the line segment between the two points.
// The y-intercept of the perpendicular bisector can be found by using the midpoint of the line segment between the two points.
// The midpoint of the line segment between the two points can be found by using the following formulas:
// x = (x1 + x2) / 2
// y = (y1 + y2) / 2

#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x, y, m, b;
    printf("Enter the coordinates of the first point: ");
    // read the coordinates of the first point
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point: ");
    // read the coordinates of the second point
    scanf("%lf %lf", &x2, &y2);
    // compute the midpoint of the line segment between the two points
    x = (x1 + x2) / 2;
    // compute the midpoint of the line segment between the two points
    y = (y1 + y2) / 2;
    // compute the slope of the perpendicular bisector
    m = -(x2 - x1) / (y2 - y1);
    // compute the y-intercept of the perpendicular bisector
    b = y - m * x;
    printf("The equation of the perpendicular bisector is y = %.2lfx + %.2lf\n", m, b);
    return 0;
}