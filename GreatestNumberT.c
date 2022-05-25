// Greatest Among three Number
main()
{
    int a,b,c;
    printf("Enter a,b,c value:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greatest");
        }
        else
        {
            printf("c is greatest");
        }
    }
    else if(b>c)
    {
        printf("b is greatest number");
    }
    else
    {
        printf("c is greatest number");
    }
    getch();
}
