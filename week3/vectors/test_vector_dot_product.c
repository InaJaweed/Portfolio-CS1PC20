#include <assert.h>
#include "vector.h"
/** Simple test framework for vector library **/
int main(void) {
	/** xvec and yvec will be the input values for the vector arithmetic routine **/
	int xvec[SIZ]={1,2,3};
	int yvec[SIZ]={5,0,2};
	int result;
	result=dot_product (xvec,yvec);
/** check each element value of the returned vector **/
	assert(11==result);
	return 0;
}
