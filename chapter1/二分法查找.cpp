#include<stdio.h>
#define MAXN 1000

int BisectionFind(int a[],int left,int right,int x);

int main(){
	int list[MAXN],i;
	int N,x;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&list[i]);
	}
	scanf("%d",&x);
	BisectionFind(list,0,N-1,x);
}

int BisectionFind(int a[],int left,int right,int x){
	int m;
	
//	if(a[i]==x)
//	return i;
	
	m=(right+1)/2;
	if(a[m]==x)
	return m;
	else if(a[m]>x){
		BisectionFind(a,left,m-1,x);
	}
	else BisectionFind(a,m+1,right,x);
}
