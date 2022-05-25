/// sum of cube of first N Natural Numbers
main()
{
    int i=1,sum=0,n;
    printf("Enter n value:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i*i;
        i++;
    }
    printf("Sum=%d",sum);
    getch();
}
