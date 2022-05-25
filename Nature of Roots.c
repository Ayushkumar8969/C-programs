// Nature of Roots
main()
{
    int a,b,c;
    float d;
    printf("Enter a,b,c value:");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Roots real and distinct");
    }
    else if(d<0)
    {
        printf("Roots imaginary and distinct");
    }
    else
    {
        printf("Roots are equal");
    }
    getch();
}
