main()
{
    int n,i,j,count=0;
    printf("Enter n value:");
    scanf("%d",&n);
    for(j=2; ;j++)
    {
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                break;
            }
        }
        if(i>j/2 && j>1)
        {
            printf("%d ",j);
            count++;
            if(count==n)
            {
            break;
            }
        }

    }
    getch();
}
