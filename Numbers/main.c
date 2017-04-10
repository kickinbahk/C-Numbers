//
//  main.c
//  Numbers
//
//  Created by Josiah Mory on 4/10/17.
//  Copyright © 2017 kickinbahk Productions. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  unsigned long x = 255;
  printf("x is %lu.\n", x);
  printf("In octal, x is %lo.\n", x);
  printf("In hexadecimal, x is %lx.\n", x);
  
  printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
  printf("11 / 3 = %d\n", 11 / 3);
  return 0;
}
