#include<stdio.h>
#include<math.h>
int main(){
	int N,i;
	int isprime=1; 
	scanf("%d",&N);
	if(N==1)  //1 既不是素数，也不是合数！ 
	isprime=0;
	for(i=2;i<=sqrt(N);i++){
		if(N%2==0){
			isprime=0;
			break;
		}
	}
	if(isprime==0)
	printf("No!\n");
	else
	printf("Yes!\n");
	return 0;
}
