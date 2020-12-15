/******************************************************************************
 * Copyright (C) 2020 by Joey Cao
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Joey Cao not liable for any misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Function Declaration>
 *
 * define function parameter and return type for: 
 * print_statisitcs()
 * print_array()
 * find_median()
 * find_mean()
 * find_maximum()
 * fine_minimum()
 * sort_array()
 *
 * @author <Joey Cao>
 * @date <12/11/20 >
 *
 */

#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median
 *
 * @param1 A unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 * @return void
 */
void print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param1 A unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 * @return void
 */
void print_array(unsigned char *array, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * @param1 A unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 * @return An unsigned char result from the function
 */
unsigned char find_median(unsigned char *array, unsigned int size); 

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * @param1 A unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 * @return An unsigned char result from the function
 */
unsigned char find_mean(unsigned char *array, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * @param1 A unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 * @return An unsigned char result from the function
 */
unsigned char find_maximum(unsigned char *array, unsigned int size); 

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * @param1 A unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 * @return An unsigned char result from the function
 */
unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 * (The zeroth Element should be the largest value, and the last element (n-1) should be 
 * the smallest value. )
 *
 * @param1 A unsigned char pointer to an n-element data array
 * @param An unsigned integer as the size of the array
 * @return void
 */
void sort_array(unsigned char *array, unsigned int size);

#endif /* __STATS_H__ */
