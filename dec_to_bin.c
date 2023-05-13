#include <stdio.h>

long toBin(int);

int main(){
    long bno;
    int dno;
    printf("====================================================\n");
    printf("\tFunction : convert decimal to binary\n");
    printf("====================================================\n");    
    printf("Decimal Number : ");
    scanf("%d", &dno);
    bno = toBin(dno);
    printf("The Binary value is : %ld\n\n",bno);
    return 0;
}

long toBin(int dno){
		long bno = 0,square = 1; 
		while (dno != 0){
			if (dno%2==1){
				bno = bno + 1*square;
			}
			else{
				bno = bno + 0*square;
			}
			square *= 10;
			dno /= 2;	
		}
		return bno;
}