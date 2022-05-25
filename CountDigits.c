//Count Digits of a given Number
main()
{
    int n,count=0;
    printf("Enter n value:");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        count++;
    }
    printf("Count=%d",count);
    getch();
}
