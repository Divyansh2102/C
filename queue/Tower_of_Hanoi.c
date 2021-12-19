#include<stdio.h>
void toh(int n,char a,char b,char c){
	if(n==1){
		printf("\nMoving disk %d  from  %c to %c ",n,a,b);
		return;
	}
	else{
		toh(n-1,a,c,b);
		printf("\nMoving disk %d  from  %c to %c ",n,a,b);
		toh(n-1,c,b,a);
		return;
	}
}
int main(){
	int n;
	printf("\nEnter the number of disk  ");
	scanf("%d",&n);
	toh(n,'a','b','c');
	return 0;
}

