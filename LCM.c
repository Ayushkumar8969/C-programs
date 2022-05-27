main()
{
    int a,b,l,m;
    scanf("%d%d",&a,&b);
    m=a>b?a:b;
    for(l=m;l<=a*b;l=l+m)
    {
        if(l%a==0 && l%b==0)
        {
            break;
        }
    }
    printf("lcm=%d",l);
}
