#include<stdio.h>
int main(){
	int n,c,d=0;
	printf("\nEnter the size ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		c=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j] && a[i]!=-1)
					c++;
		}
		if(c>0)
			d++;
		if(d==3){
			printf("\nThe 3rd repeating number is %d  ",a[i]);
			break;
		}				
	}
	return 0;
}
