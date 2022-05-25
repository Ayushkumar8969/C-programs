// Nth Term Of Fibonacii Series
main()
{
    int n,a=-1,b=1,c;
    printf("Enter n value:");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    printf("Num=%d",c);
    getch();
}
