// Reverse a Number
main()
{
    int n,rem,sum=0;
    printf("Enter n value:");
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("Reverse Number=%d",sum);
    getch();
}
