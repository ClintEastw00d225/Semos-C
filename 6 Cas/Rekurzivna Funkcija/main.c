#include <stdio.h>
#include <stdlib.h>

int factorial(int n)//factorial
{
    if(n==0 || n==1)//base case za 0! i za 1!
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);//rekurzija, n!=n*(n-1)!
    }
}

int main()
{
    int a,f;
    printf("Vnesete od koj broj bi sakale da se presmeta faktoriel\n");
    scanf("%d", &a);
    f=factorial(a);
    printf("%d! = %d", a,f);
    return 0;
}


//int Fibonacci(int n)
//{
//    if( n==0 )
//    {
//        return 0;
//    }
//    else if (n==1)
//    {
//        return 1;
//    }
//    else
//    {
//        return(Fibonacci(n-1) + Fibonacci(n-2));
//    }
//}
//
//int main()
//{
//    int a;
//    printf("Do koj element sakate da se prikaze Fibonacci nizata?\n");
//    scanf("%d",&a);
//    for(int i=0;i<a;i++)
//    {
//        printf("%d\n", Fibonacci(i));
//    }
//    return 0;
//}
