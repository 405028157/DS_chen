//多项式表达的直接法算法

/*    (此段存在则本算法不存在)
#include<stdio.h>
#include<math.h>
int main(){
	double x;
	int n,i;
	printf("计算多项式的值，请先输入x：");
	scanf("%lf",&x);
	printf("输入最高项指数n：");
	scanf("%d",&n);
	double a[100];
	printf("输入多项式的系数：");
	for(i=0;i<=n;i++){
		scanf("%lf",&a[i]);
	}
	double s=a[0];
	for(i=1;i<=n;i++){
		s+=a[i]*pow(x,i);
	}
	printf("该多项式的和s=");
	printf("%f\n",s);
}

/*########################################*/

//下面是秦九韶算法

///*    (此段存在则下面算法不存在)
#include<stdio.h>
int main(){
	double x;
	int n,i;
	printf("计算多项式的值，请先输入x：");
	scanf("%lf",&x);
	printf("输入最高项指数n：");
	scanf("%d",&n);
	double a[100];
	printf("输入多项式的系数：");
	for(i=0;i<=n;i++){
		scanf("%lf",&a[i]);
	}
	double s=a[n];
	for(i=n;i>0;i--){
		s=x*s+a[n-1];
	}
	printf("该多项式的和s=");
	printf("%f\n",s);
}
/*####################################*/ 
