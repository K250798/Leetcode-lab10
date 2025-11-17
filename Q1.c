#include <stdio.h>

void moveZeroes(int nums[],int n)
{
    int i,j=0;
    for(i=0;i<n;i=i+1)
        if(nums[i]!=0)
        {
            int t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
            j=j+1;
        }
}

int main()
{
    int nums[]={0,1,0,3,12};
    int n=5;
    moveZeroes(nums,n);

    int i;
    for(i=0;i<n;i=i+1)
        printf("%d ",nums[i]);

    return 0;
}

