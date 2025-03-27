#include<stdio.h>
int n, cnt, i, num;
int main(){
	scanf("%d",&num);
	n=1;
	while(n<=num){
		i=1;
		cnt=0;
		while(i<=n){
		
		if(n%i==0){
			printf("%d  ",i);
			cnt++;
		}
		i++;
	}
	
}
	printf("\n%d\n",cnt);
	return 0;
}
