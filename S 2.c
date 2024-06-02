#include <stdio.h>

int main() {
  float radius, length, width, base, height, area;

  printf("Enter the radius of the circle:  ");
  scanf("%f", &radius);
  area = 3.1416 * radius * radius;
  printf("Area of circle is: %.2f", area);

  printf("Enter the length and width of the rectangle: ");
  scanf("%f %f", &length, &width);
  area = length * width;
  printf("Area of rectangle is: %.2f", area);

  printf("Enter base and height of the triangle: ");
  scanf("%f %f", &base, &height);
  area = 0.5 * base * height;
  printf("Area of triangle is: %.2f", area);

  return 0;
}
