#include <stdio.h>
int main(){
	int number ,sum , reverse ,thousand, hundred, ten,unit;
	   printf("nhap so 4 chu so : ");
    	scanf("%d", &number);
	thousand =number/1000;
	hundred = (number/100)%10;
	ten=(number/10)%10;
	unit= number%10;
	sum =thousand + ten + unit + hundred;
	printf("so nhap vao la : %d\n", number);
	printf("tong cac chu so cua so %d la: %d\n", number,sum);
    
    return 0;
}
