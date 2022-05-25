main()
{
    int a,b,t;
    printf("Enter a,b value:");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("a=%d b=%d",a,b);
    printf("t=%d",t);
    getch();

}
