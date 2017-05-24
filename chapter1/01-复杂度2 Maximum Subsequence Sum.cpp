#include <stdio.h>  
int main()   
{  
    int k,i;  
    int ThisSum=0,MaxSum;   //当前子列和，最大子列和  
    int first,tempfirst,last,templast;  
    scanf("%d",&k);  
    int a[k];  
      
    for(i=0;i<k;i++)  
    {  
        scanf("%d",&a[i]);  
    }  
    MaxSum=a[0];    //初始化数值  
    tempfirst=a[0];  
    templast=a[0];  
    first=a[0];  
    last=a[0];  
    for(i=0;i<k;i++)  
    {  
        if(ThisSum>=0)   //当前子列和大于或等于0时，templast移动到当前元素，且当前子列和累加该元素  
  
        {  
            ThisSum+=a[i];    
            templast=a[i];  
        }else{  //当前子列和小于0时，当前元素作为新的子列和，templast和tempfirst均为当前元素  
  
            ThisSum=a[i];  
            tempfirst=a[i];  
            templast=a[i];  
        }  
        if(ThisSum>MaxSum)   //当前子列和大于最大子列和时，存储和、起始元素  
        {  
            MaxSum=ThisSum;  
            last=templast;  
            first=tempfirst;  
        }  
    }  
    if(MaxSum<0) //当最大子列和小于0，即所有元素都是负数，最大子列和为0，存储起始的元素  
        {  
            MaxSum=0;  
            last=a[k-1];  
            first=a[0];   
        }  
    printf("%d %d %d\n",MaxSum,first,last);  
    return 0;  
} 
