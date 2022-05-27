main()
{
    int n,i;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
           break;
        }
    }
    if(i>n/2 && n>1)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }
    getch();

}
