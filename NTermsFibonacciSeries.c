// N th Term of a Fibonacci Series
main()
{
    int a=-1,b=1,c,n;
    printf("Enter n value:");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
    getch();
}
