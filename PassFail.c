// Pass or Fail
main()
{
    int a,b,c,d,e;
    float p,s;
    printf("Enter 5 subject marks:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    p=(s/500)*100;
    if(p>=45)
    {
        printf("Pass\n");
        printf("Result=%f",p);
    }
    else
    {
        printf("Fail");
    }
    getch();
}
