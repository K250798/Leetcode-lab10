#include <stdio.h>

void reverse(char s[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
        i=i+1;
        j=j-1;
    }
}

int main()
{
    char s[]={'h','e','l','l','o'};
    int n=5;

    reverse(s,n);

    int i;
    for(i=0;i<n;i=i+1)
        printf("%c ",s[i]);

    return 0;
}
