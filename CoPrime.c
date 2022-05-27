main()
{
    int a,b,i,min;
    printf("Enter a,b value:");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    printf("min=%d\n",min);
    for(i=2;i<=min/2;i++)
    {
        if(a%i==0 && b%i==0)
        {
            break;
        }
    }
    if(i>min/2 && min>0)
    {
        printf("Co-Prime");
    }
    else
    {
        printf("Not a Co-Prime");
    }
}
