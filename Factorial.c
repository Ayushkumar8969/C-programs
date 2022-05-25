// Factorial of a number
main()
{
    int n,fact=1;
    printf("Enter n value:");
    scanf("%d",&n);
    while(n)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial=%d",fact);
    getch();
}
