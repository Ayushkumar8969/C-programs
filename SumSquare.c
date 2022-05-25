//sum of square of first n natural numbers
main()
{
    int i=1,n,sum=0;
    printf("Enter n value:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        i++;
    }
    printf("Sum=%d",sum);
    getch();
}
