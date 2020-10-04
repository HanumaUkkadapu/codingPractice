#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int returnTotalEmployees(int levels){
    int total = 0;
    while(levels>0){
        total += (int) pow(2,levels);
        levels--;
    }
    return total;
}

int main() {
    
	int incent, percent, amount;
	
	scanf("%d", &incent);
	scanf("%d", &percent);
	scanf("%d", &amount);
	
	printf("%d ", incent);
	printf("%d ", percent);
	printf("%d ", amount);
	
	int e = 0, balance = amount - incent, add = 0, added = 0, l = 1,i = 0;
    
	//{
	    //check for  level
	        //can be done with e
	        //
	    //get no of employees in that level
	    //add a employee
	    //calculate incentive from that employee
	    //add it to total incentive
	    //check if goal reached
	    //if yes => break andprint output
	    //else => continue;
	    
	//}
	
	//printf("\n%d\n", returnTotalEmployees(3));
	printf("Balance: %d\tAddedIncent: %d", balance, added);
	
	return 0;
}
