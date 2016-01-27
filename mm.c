/*********************************************************************************/
/* Assignment 1: 2-D/ NxN Matrix Swap and  Multiplication ************************/
/* Name: YOUR NAME GOES HERE *****************************************************/
/*********************************************************************************/

/*********************************************************************************/
/* Usual suspects to include *****************************************************/
/*********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>

/*********************************************************************************/
/* Function Calls ****************************************************************/
/*********************************************************************************/

double **mm_alloc( int size )
{
    /*
     * hints: allocate an array of pointers to a double, 
     * then allocate an row/array of doubles and assign each double pointer that row
     * use calloc for allocation and zeroing out all the bytes
     */
    return((double **)NULL); // delete for your implementation
}

void mm_free( int size, double **matrix  )
{
    /*
     * hint: reverse of the allocation process 
     * by freeing each array of doubles, 
     * then free the array of double pointers
     */
    return; // delete for your implementation
}

double **mm_read( char *filename, int *size ) 
{
  /*
   * hints: fopen the file, then use fgets to read each line of data.
   * The first line is the size of the matrix, so read it first. 
   * make sure you record the "size" in the size argument.
   * Next alloc each of the matrixes.
   * Use sscanf to take the line of text and parse out the matrix entry.
   */
  double **matrix = NULL;

    
  return( matrix );
}

void mm_print( int size, double **matrix )
{
    /*
     * iterate over the matrix entries across each row.
     * when a row is complete insert a newline character "\n"
     */

    return; // delete for your implementation.
}

double **mm_swap( int size, double **matrix ) 
{
    /*
     * hints: allocate space for swapped matrix
     * compute swap matrix using original matrix as input. 
     */

  double **swap=NULL;

  return( swap ); // return the transpose matrix
}

double **mm_matrix_mult( int size, double **matrix, double **transpose )
{
    /*
     * hints: alloc a results matrix, 
     * do the matrix multiple per the quad loop method.
     * this is an extension of regular 2-D matrix mult. 
     * return the results_matrix
     */

    return( (double **) NULL ); // delete for your implementation.
}

int main()
{
    /*
     * you must keep this function AS IS. 
     * you cannot modify it!
     */
    char filename[256];
    double **matrix=NULL;
    double **swap_matrix=NULL;
    double **results_matrix=NULL;
    int size=0;

    printf("Please enter the matrix data file name: ");
    scanf( "%s", filename );

    matrix = mm_read( filename, &size );
    swap_matrix = mm_swap( size, matrix ); 
    results_matrix = mm_matrix_mult( size, matrix, swap_matrix );

    mm_print( size, results_matrix );
    mm_free( size, matrix );
    mm_free( size, swap_matrix );
    mm_free( size, results_matrix );
    return( 0 ); 
}
