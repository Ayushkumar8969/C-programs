// print N odd natural number in reverse order
main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    while(n)
    {
        if(2*n%2==0)
        {
            printf("%d ",2*n-1);
        }
        n--;
    }
}
