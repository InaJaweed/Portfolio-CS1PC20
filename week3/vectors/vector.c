#include "vector.h"
/** It is a simple fixed size vector for addition routine, adds each elements x to corresponding 
elements of y, storing the answer in z. **/
int add_vectors (int x[], int y[], int z[]) {
	for (int i=0;i<SIZ;i++)
		z[i]=x[i]+y[i];
	return 0;
}

/** Fixed size dot product routine, multiply element x to corresponding element of y, adding up
totals. Return the actual value that has been calculated. **/
int dot_product (int x[], int y[]) {
/** res is a local variable to hold the result that is calculated **/
	int res = 0;
	for (int i=0;i<SIZ;i++)
		res=res + x[i]*y[i];
	return res;
}
