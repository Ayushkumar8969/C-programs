// check whether the given number is fibonacci or not
main()
{
    int n,c,a=-1,b=1;
    printf("Enter n value:");
    scanf("%d",&n);
    while(1)
    {
        c=a+b;
        a=b;
        b=c;
        if(n==c)
        {
            printf("Yes");
            break;
        }
        else
        {
            if(n<c)
            {
                printf("No");
                break;
            }
        }
    }
}
