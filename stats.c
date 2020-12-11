/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Joey Cao is not liable for any misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Reads array and report statistic and sort array
 *
 * analyze an array of unsigned char data items and report analytics on the maximum, 
 * minimum, mean, and median of the data set. In addition, you will need to reorder 
 * this data set from large to small. All statistics should be rounded down to the 
 * nearest integer. After analysis and sorting is done, you will need to print that 
 * data to the screen in nicely formatted presentation
 *
 * @author Joey Cao
 * @date 12/11/20
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  // analyze max, min, mean, and median first
  // sort and manipulate array
  // print sorted array
  // print finding for statistic

}

/* Add other Implementation File Code Here */
