//����ʽ����ֱ�ӷ��㷨

/*    (�˶δ������㷨������)
#include<stdio.h>
#include<math.h>
int main(){
	double x;
	int n,i;
	printf("�������ʽ��ֵ����������x��");
	scanf("%lf",&x);
	printf("���������ָ��n��");
	scanf("%d",&n);
	double a[100];
	printf("�������ʽ��ϵ����");
	for(i=0;i<=n;i++){
		scanf("%lf",&a[i]);
	}
	double s=a[0];
	for(i=1;i<=n;i++){
		s+=a[i]*pow(x,i);
	}
	printf("�ö���ʽ�ĺ�s=");
	printf("%f\n",s);
}

/*########################################*/

//�������ؾ����㷨

///*    (�˶δ����������㷨������)
#include<stdio.h>
int main(){
	double x;
	int n,i;
	printf("�������ʽ��ֵ����������x��");
	scanf("%lf",&x);
	printf("���������ָ��n��");
	scanf("%d",&n);
	double a[100];
	printf("�������ʽ��ϵ����");
	for(i=0;i<=n;i++){
		scanf("%lf",&a[i]);
	}
	double s=a[n];
	for(i=n;i>0;i--){
		s=x*s+a[n-1];
	}
	printf("�ö���ʽ�ĺ�s=");
	printf("%f\n",s);
}
/*####################################*/ 
