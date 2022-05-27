main()
{
    int n,i=2,flag=0;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            flag=1;
        }
        else{
            flag=0;
        }
        if(flag==1)
        {
            n=n/i;
        }
        else{
            i++;
        }
    }
}
