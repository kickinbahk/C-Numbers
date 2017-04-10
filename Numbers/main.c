//
//  main.c
//  Numbers
//
//  Created by Josiah Mory on 4/10/17.
//  Copyright © 2017 kickinbahk Productions. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
  unsigned long x = 255;
  printf("x is %lu.\n", x);
  printf("In octal, x is %lo.\n", x);
  printf("In hexadecimal, x is %lx.\n", x);
  
  printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
  printf("11 / 3 = %d\n", 11 / 3);
  printf("11 / 3 = %f\n", 11 / (float)3);
  
  printf("The absolute value of -5 is %d\n", abs(-5));
  
  double y = 12345.6789;
  printf("y is %.2f\n", y);
  printf("y is %.2e\n\n", y);
  
  double j = 1;
  printf("The sine of 1 radian is: %.3f", sin(j));
  printf("\n\n");
  
  return 0;
}
