// print N even natural numbers in reverse order
main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    while(n>=1)
    {
        if((2*n)%2==0)
        {
            printf("%d ",2*n);
        }
        n--;
    }
    getch();
}
