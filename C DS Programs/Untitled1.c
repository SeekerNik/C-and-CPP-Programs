#include <stdio.h>

int main(void) {

	// Define the two integer variables
	int L,R;
	int i;

	// Get L and R from the user
	scanf("%d", &L);
	scanf("%d", &R);

	// Write here the logic to print all integers between L and R
    for(int j=L;j<=R;j++)
    {
        printf("%d",j);
    }



	return 0;
}
