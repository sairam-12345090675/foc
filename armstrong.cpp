#include<stdio.h>
int main(){
	int n,num,sum=0;
	float average;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("enter number %d:",i);
		scanf("%d",&num)
	sum+=num;
}
average=(float) sum/n;
printf("sum = %d\n",sum);
printf("average = %2f\n",average);
return 0;
}
