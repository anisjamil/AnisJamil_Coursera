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
  * @file stats.c
  * @brief To analyze a given data set and report analtyics
  *
  * This file analyzes an array of unsigned char
  * data items and reports analytics on the maximum, minimum, mean, and median of
  * the data set. Various functions have been used to achieve the desired tasks.
  *
  * @Author M Muhammad Anis Jamil
  * @date 12-12-2020
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
								  7,  87, 250, 230,  99,   3, 100,  90 };

	/* Other Variable Declarations */
	unsigned int medianArray = 0; //to hold the value of median of the sorted array 
	unsigned int meanArray = 0; //to hold the value of mean of the sorted array 
	unsigned int maximumArray = 0; //to hold the value of maximum of the sorted array 
	unsigned int minimumArray = 0; //to hold the value of minimum of the sorted array 

	/* Statistics and Printing Functions */
	printf("\nActual Array:");
	print_array(test, SIZE); //printing of array
	sort_array(test, SIZE); //sorting of array
	printf("\n\nSorted Array:");
	print_array(test, SIZE); //printing of array
	medianArray = find_median(test, SIZE); //calculating median of array
	meanArray = find_mean(test, SIZE); //calculating mean of array
	maximumArray = find_maximum(test, SIZE); //calculating maximum of array
	minimumArray = find_minimum(test, SIZE); //calculating minimmum of array
	print_statistics(medianArray, meanArray, maximumArray, minimumArray); //printing of all statistics
	printf("\n\n");


}

/* print_array */
void print_array(unsigned char* arrayPtr, int arraySize) {
	for (unsigned int i = 0; i < arraySize; i++) { //iterating through the array
		if (i % 10 == 0) {
			printf("\n\t");
		}
		printf("%5d ", *(arrayPtr + i ));
	}
	
}

/* print_statistics */
void print_statistics(unsigned int medianArray, unsigned int meanArray, unsigned int maximumArray, unsigned int minimumArray) {

	printf("\n\n Statistics: ");
	printf("\n\t %-8s : %3d", "Median", medianArray);
	printf("\n\t %-8s : %3d", "Mean", meanArray);
	printf("\n\t %-8s : %3d", "Maximum", maximumArray);
	printf("\n\t %-8s : %3d", "Minimum", minimumArray);
}

/* find_median */
unsigned int find_median(unsigned char* arrayPtr, int arraySize) {
	unsigned int medianValue = 0;
	if (arraySize % 2 == 0) {
		medianValue = (*(arrayPtr + (arraySize / 2) ) + *(arrayPtr + ((arraySize / 2) - 1) )) / 2;
	}
	else {
		medianValue = *(arrayPtr + ((arraySize / 2) - 1));
	}

	return medianValue;
}

/* find_mean */
unsigned int find_mean(unsigned char* arrayPtr, int arraySize) {
	unsigned int sum = 0;
	for (unsigned int i = 0; i < arraySize; i++)
	{
		sum += arrayPtr[i];
	}
	return sum / arraySize;
}

/* find_maximum */
unsigned int find_maximum(unsigned char* arrayPtr, int arraySize) {
	unsigned int maximumInt = *arrayPtr; //taking first value by default
	for (unsigned int i = 1; i < arraySize; i++)
	{
		if (maximumInt < arrayPtr[i]) {
			maximumInt = arrayPtr[i];
		}
	}

	return maximumInt;
}

/* find_minimum */
unsigned int find_minimum(unsigned char* arrayPtr, int arraySize) {
	unsigned int minimumInt = *(arrayPtr + (arraySize - 1) ); //taking last value by default 
	for (unsigned int i = 0; i < arraySize - 1; i++)
	{
		if (minimumInt > arrayPtr[i]) {
			minimumInt = arrayPtr[i];
		}
	}

	return minimumInt;
}

/* sort_array */
void sort_array(unsigned char* arrayPtr, int arraySize) {

	unsigned int maxValue = 0;
	for (unsigned int i = 0; i < arraySize; i++) {
		maxValue = arrayPtr[i];
		for (unsigned int j = i + 1; j < arraySize; j++) {
			if (arrayPtr[j] > maxValue) { //another max found
				arrayPtr[i] = arrayPtr[j]; //replace our max value in array 
				arrayPtr[j] = maxValue; //replace the newly found location with earlier maxValu
				maxValue = arrayPtr[i]; // update current Maximum valu
			}
		}

	}
}
