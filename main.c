#include<stdio.h>
int main()
{
    int i=0,j=0,k=0;
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            k = i * j;
            printf("%2d * %2d = %2d",i,j,k);
        }
        putchar(10);
    }
    return 0;
}

int main03(void)
{
    int i = 0;
    while(i<4)
    {
        int j = 0;
        while(j<6)
        {
            printf("*");
            j++;
        }
        putchar(10);
        i++;
    }
    return 0;
}
int main01()
{
    /* int i=0;
    int sum=0;
    do
    {
        sum+=i;
        i++;
    }while(i<=100);
    int sum=0;
    for(int i=0;i<=100;i++)
    {
        sum+=i;
    }
    printf("sum = %2d",sum);
    return 0;
    int i=0,summ=0;
    while(i<=100)
    {
        summ+=i;
        i++;
    }
    printf("sum = %2d",sum);*/
}
int main02()
{
    int i; int j;
    for(i=1,j=10-i; i<10 && j>0; i++,j--)
    {
        printf(" 10 = %d + %d\n",i,j);
    }
    return 0;

}
