n#include <stdio.h>
/** 5th Homework of Tejeong's Class **/

/// Multiplication of matrices A1~A6 that have '1' elements all.

int main() {

	// Show each matrix A1~A6

	printf("This program will multiply matrices A1~A6 that have '1' elements in themselves.");
	printf("A1:\n\n1 1\n1 1\n1 1\n1 1\n1 1\n\n");	// Matrix A1 (5 by 2)
	printf("A2:\n\n1 1 1\n1 1 1\n\n");	// Matrix A2 (2 by 3)
	printf("A3:\n\n1 1 1 1\n1 1 1 1\n1 1 1 1\n\n");	// Matrix A3 (3 by 4)
	printf("A4:\n\n1 1 1\n1 1 1\n1 1 1\n1 1 1\n\n");	// Matrix A4 (4 by 3)
	printf("A5:\n\n1 1\n1 1\n1 1\n\n");	// Matrix A5 (3 by 2)
	printf("A6:\n\n1 1 1\n1 1 1\n\n");	// Matrix A6 (2 by 3)

	// Do the matrix multiplication A1xA2xA3xA4xA5xA6

	printf("A1*A2:\n\n2 2 2\n2 2 2\n2 2 2\n2 2 2\n2 2 2\n\n");	// Multiplication of A1 and A2
	printf("A1*A2*A3:\n\n6 6 6 6\n6 6 6 6\n6 6 6 6\n6 6 6 6\n6 6 6 6\n\n");	// Multiplication of A1, A2, and A3

	// Show the result



	getchar();
	getchar();
	return 0;
}
