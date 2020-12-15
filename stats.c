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

  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);

}

/* Sort an array from greatest to smallest*/
void sort_array(unsigned char *array, unsigned int len) 
{
  int i, j;
  unsigned char tmp, greatest;
  for (i = 0; i < (len); i++)
  {
    greatest=array[i]; //initalize the greatest number
    for (j = i; j < (len); j++)
    {
      if (array[j] > greatest)
        {
          greatest=array[j];  //finding greatest in array
          tmp=array[i];  //temp value for swpping array element
          array[i]=array[j];
          array[j]=tmp;
        }
    }
  }
}

/* Print an array */
void print_array(unsigned char *array, unsigned int len) 
{
  int i;
  printf("Printing array below...\n");
  for (i = 0; i < (len); i++)
  {
    printf("Array[%d]=%d\n", i, array[i]);
  }
}

/* Finding minimum in an array */
unsigned char find_minimum(unsigned char *array, unsigned int len) 
{
  int i;
  unsigned char min=array[0];
  for (i = 0; i < (len); i++)
  {
    if (array[i] < min)
      {
         min=array[i];
      }
  }
  return min;
}

/* Finding maximum in array */
unsigned char find_maximum(unsigned char *array, unsigned int len) 
{
  int i;
  unsigned char max=array[0];
  for (i = 0; i < (len); i++)
  {
    if (array[i] > max)
      {
         max=array[i];
      }
  }
  return max;
}

/* Finding mean in array */
unsigned char find_mean(unsigned char *array, unsigned int len) 
{
  int i;
  unsigned int sum;
  for (i = 0; i < (len); i++)
  {
    sum=sum+array[i];
  }
  return sum/len;
}

/* Finding median in array */
unsigned char find_median(unsigned char *array, unsigned int len) 
{
  return array[len/2];
}

/* Run find min, max, mean, median function and print statistic*/
void print_statistics(unsigned char *array, unsigned int len) 
{
  unsigned char mean, med, max, min;
  min = find_minimum(array, SIZE);
  max = find_maximum(array, SIZE);
  mean = find_mean(array, SIZE);
  med = find_median(array, SIZE);
  printf("Statistic Summary below...\n");
  printf("Array minimum=%d\n", min);
  printf("Array maximum=%d\n", max);
  printf("Array mean=%d\n", mean);
  printf("Array median=%d\n", med);
}



