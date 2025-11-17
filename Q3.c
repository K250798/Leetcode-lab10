#include <stdio.h>

int removeDuplicates(int nums[],int n)
{
    if(n==0) return 0;

    int k=1;
    int i;
    for(i=1;i<n;i=i+1)
        if(nums[i]!=nums[k-1]){
            nums[k]=nums[i];
            k=k+1;
        }
    return k;
}
int main()
{
    int nums[]={0,0,1,1,1,2,2,3,3,4};
    int n=10;

    int k=removeDuplicates(nums,n);

    int i;
    for(i=0;i<k;i=i+1)
        printf("%d ",nums[i]);
    return 0;
}
