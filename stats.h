/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief This file contains function declarations and descriptions
 *
 * This is a header file for the main file stats.c and it is used to 
 * declare all the function definitions for functions used in the main 
 * file(stats.c). Moreover, a detailed description of each function and 
 * its interfaces is also given.
 *
 * @author Muhammad Anis Jamil
 * @date 12-12-2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* print_statistics */ 
/**
 * @brief  - A function that prints the statistics of an array.
 *
 * The function takes 04 statistics namely minimum, maximum, mean, 
 * and median of an array and prints them onto the console.
 *
 * @param medianArray Unsigned integer having median of array 
 * @param meanArray Unsigned integer having minimum value of array 
 * @param maximumArray Unsigned integer having maximum value of array 
 * @param minimumArray Unsigned integer having minimum value of array 
 *
 * @return This function returns nothing.
 */
void print_statistics(unsigned int medianArray, unsigned int meanArray, unsigned int maximumArray, unsigned int minimumArray);

/* print_array */ 
/**
 * @brief  - A function that prints an array.
 *
 * The function takes an character pointer to an array of data and its 
 * length and prints the array 
 * to the screen in an organized manner.
 *
 * @param arrayPtr unsigned char pointer to the array which is to be printed
 * @param arraySize Integer - size of array which is to be printed
 *
 * @return This function returns nothing.
 */
void print_array(unsigned char* arrayPtr, int arraySize);

/* find_median */ 
/**
 * @brief  - A function that finds the median of an array.
 *
 * The function takes an character pointer to an array of data and its 
 * length and returns the median of the array.
 *
 * @param arrayPtr unsigned char pointer to the array
 * @param arraySize size of array 
 *
 * @return An unsigned integer having median of the array
 */
unsigned int find_median(unsigned char* arrayPtr, int arraySize);

/* find_mean */ 
/**
 * @brief  - A function that finds the mean of an array.
 *
 * The function takes an character pointer to an array of data and its 
 * length and returns the mean of the array.
 *
 * @param arrayPtr unsigned char pointer to the array 
 * @param arraySize size of array
 *
 * @return An integer having mean of the array
 */
unsigned int find_mean(unsigned char* arrayPtr, int arraySize);

/* find_maximum */ 
/**
 * @brief  - A function that finds the maximum of an array.
 *
 * The function takes an character pointer to an array of data and its 
 * length and returns the maximum of the array.
 *
 * @param arrayPtr unsigned char pointer to the array 
 * @param arraySize size of array
 *
 * @return An unsigned integer having maximum of the array
 */
unsigned int find_maximum(unsigned char* arrayPtr, int arraySize);

/* find_minimum */ 
/**
 * @brief  - A function that finds the minimum of an array.
 *
 * The function takes an character pointer to an array of data and its 
 * length and returns the minimum of the array.
 *
 * @param arrayPtr unsigned char pointer to the array 
 * @param arraySize size of array
 *
 * @return An unsigned integer having minimum of the array
 */
unsigned int find_minimum(unsigned char* arrayPtr, int arraySize);

/* sort_array */ 
/**
 * @brief  - A function that sorts the given array in descending order.
 *
 * Given an array of data and a length, this function sorts the array from largest to smallest. 
 * The zeroth Element is the largest value, and the last element (n-1) is be the smallest value.
 *
 * @param arrayPtr unsigned char pointer to the array which is to be sorted
 * @param arraySize size of array
 *
 * @return This function does not return any thing since input array is sorted 
 */
void sort_array(unsigned char* arrayPtr, int arraySize);

#endif /* __STATS_H__ */
