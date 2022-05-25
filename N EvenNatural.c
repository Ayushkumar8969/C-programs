// print N Even natural numbers
main()
{
    int i=1,n;
    printf("Enter n value:");
    scanf("%d",&n);
    while(i<=2*n)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        i++;
    }
}
