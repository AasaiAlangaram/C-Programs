//Program description:- Write a C program with a user-defined function to find the area of a rectangle. Take input from the user.

#include<stdio.h>

// function declaration
float circleArea(float r);

int main()
{
  float radius, area;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  area = circleArea(radius); //function calling
  printf("Area of circle = %.2f\n",area);

  return 0;
}

// function definition
float circleArea(float r)
{
  float area = 3.14 * r * r;
  return area; // return statement
}