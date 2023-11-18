#include <assert.h>
#include "vector.h"
/** This is a simple test framework for vector library **/
int main(void) {
/** xvec and yvec will be the inputs to the vector arithmetics and zvec will take the return 
value **/
	int xvec [SIZ] = {1,2,3};
	int yvec [SIZ] = {5,0,2};
	int zvec [SIZ];
	add_vectors(xvec,yvec,zvec);
/** Checks each of the returned vector **/
	assert (6==zvec[0]);
	assert (2==zvec[1]);
	assert (5==zvec[1]);
/** If the asserts works and there wasn't any errors returns 0 **/
	return 0;
}
