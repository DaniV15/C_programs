#include <stdio.h>
#include <stdlib.h>

int main() {
	int amt, total;

	//Hungarian banknotes
	int cach[]={20000,10000,5000,2000,1000,500,200,100,50,20,10,5};

	printf("Input the amount: ");
	scanf("%d",&amt);

	//Round to nearest 5
	amt= (amt+2)/5 *5;

	int i=0;
	while(amt > 0)
    {
        total = (int)amt/cach[i];
        printf("\n%d Note(s) of %d\n", total, cach[i]);
        amt = amt-(total*cach[i]);
        i++;
    }

	return 0;
}
