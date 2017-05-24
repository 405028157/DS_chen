/*最大子列和问题*/

#include<stdio.h>
//第3种算法特有的函数声明
int max3(int a,int b,int c);
int DivideAndConquer(int list,int left,int right);

int max_subsequence_sum(int list[],int n);//4种算法共有的函数声明 
int main()
{
	int N,i;
	int a[100000];
	int maxsum;
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	maxsum=max_subsequence_sum(a,N);
	printf("%d",maxsum);
	return 0;
}
/*#####################################################################3########################*

//1st algorithm:穷举所有子列和找最大值 
int max_subsequence_sum(int list[],int n){
	int thissum=0,maxsum=0;
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			thissum=0;
			for(k=i;k<=j;k++)
			thissum+=list[k];
			if(thissum>maxsum)
			maxsum=thissum;
		}
	}
	return maxsum;
}

/*#######################################################################################################*

//2ed algorithm:算法1的改进，避免重复步骤浪费时间。名为部分存储中间值的穷举

int max_subsequence_sum(int list[],int n){
	int thissum=0,maxsum=0;
	int i,j;
	for(i=0;i<n;i++){
		thissum=0;
		for(j=i;j<n;j++){
			thissum+=list[j];
			if(thissum>maxsum)
			maxsum=thissum;
		}
	}
	return maxsum;
}

/*######################################################################################################*/

//3rd algorithm:分而治之

//int max3(int a,int b,int c){
//	/*return the maxnum in 3 numbers*/
//	return a>b?a>c?a:c:b>c?b:c;/*可这样理解：a>b ? (a>c?a:c) : (b>c?b:c) */
//}
//
//int DivideAndConquer(int list[],int left,int right){
//	int MaxLeftSum,MaxRightSum;
//	int MaxLeftBorderSum,MaxRightBorderSum;
//	int LeftBorderSum,RightBorderSum;
//	int center,i;
//	if(left==right){
//		if(list[left]>0) return list[left];
//		else return 0;
//	}
//		
//	center=(left+right)/2;
//	MaxLeftSum=DivideAndConquer(list,left,center);
//	MaxRightSum=DivideAndConquer(list,center+1,right);
//	
//	MaxLeftBorderSum=0,LeftBorderSum=0;
//	for(i=center;i>=left;i--){
//		LeftBorderSum+=list[i];
//		if(LeftBorderSum>MaxLeftBorderSum)
//		MaxLeftBorderSum=LeftBorderSum;
//	}
//	
//	MaxRightBorderSum=0,RightBorderSum=0;
//	for(i=center+1;i<=right;i++){
//		RightBorderSum+=list[i];
//		if(RightBorderSum>MaxRightBorderSum)
//		MaxRightBorderSum=RightBorderSum;
//	}
//	
//	return max3(MaxLeftSum,MaxRightSum,MaxLeftBorderSum+MaxRightBorderSum);
//}
//
//int max_subsequence_sum(int list[],int n){
//	return DivideAndConquer(list,0,n-1);
//}
/*######################################################################################################*/

//4th algorithm: handle online(the best)
int max_subsequence_sum(int list[],int n){
	int thissum=0,maxsum=0;
	int i;
	for(i=0;i<n;i++){
		thissum+=list[i];
		if(thissum>maxsum){
			maxsum=thissum;
		}
		else if(thissum<0)
		thissum=0;
	}
	return maxsum;
}
