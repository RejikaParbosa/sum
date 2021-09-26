#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,i,n,m;
    float nn,mm,sum;
    printf("Input the value of X:");
    scanf("%d",&x);
    printf("Input number of terms:");
    scanf("%d",&n);
    sum=x+1;
    m=-1;
    printf("The values of the series:\n");
    printf("%d\n",x+1);
    for(i=1;i<n;i++)
    {
        y=((2*i)+1);
        mm=pow(x,y)/y;
        nn=mm*m;
        printf("%.2f\n",nn);
        sum=sum+nn;
        m=m*(-1);
    }
    printf("The sum=%.2f\n",sum);
    return 0;
}
