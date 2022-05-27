main()
{
    int a,b,i,min;
    printf("Enter a,b value:");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(i=min;i>=1;i++)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
    getch();
}
