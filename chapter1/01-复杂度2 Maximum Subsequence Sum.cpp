#include <stdio.h>  
int main()   
{  
    int k,i;  
    int ThisSum=0,MaxSum;   //��ǰ���кͣ�������к�  
    int first,tempfirst,last,templast;  
    scanf("%d",&k);  
    int a[k];  
      
    for(i=0;i<k;i++)  
    {  
        scanf("%d",&a[i]);  
    }  
    MaxSum=a[0];    //��ʼ����ֵ  
    tempfirst=a[0];  
    templast=a[0];  
    first=a[0];  
    last=a[0];  
    for(i=0;i<k;i++)  
    {  
        if(ThisSum>=0)   //��ǰ���кʹ��ڻ����0ʱ��templast�ƶ�����ǰԪ�أ��ҵ�ǰ���к��ۼӸ�Ԫ��  
  
        {  
            ThisSum+=a[i];    
            templast=a[i];  
        }else{  //��ǰ���к�С��0ʱ����ǰԪ����Ϊ�µ����кͣ�templast��tempfirst��Ϊ��ǰԪ��  
  
            ThisSum=a[i];  
            tempfirst=a[i];  
            templast=a[i];  
        }  
        if(ThisSum>MaxSum)   //��ǰ���кʹ���������к�ʱ���洢�͡���ʼԪ��  
        {  
            MaxSum=ThisSum;  
            last=templast;  
            first=tempfirst;  
        }  
    }  
    if(MaxSum<0) //��������к�С��0��������Ԫ�ض��Ǹ�����������к�Ϊ0���洢��ʼ��Ԫ��  
        {  
            MaxSum=0;  
            last=a[k-1];  
            first=a[0];   
        }  
    printf("%d %d %d\n",MaxSum,first,last);  
    return 0;  
} 
