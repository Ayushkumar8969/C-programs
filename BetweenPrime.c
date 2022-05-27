main()
{
    int a,b,i,j;
    printf("Enter a, b value:");
    scanf("%d%d",&a,&b);
    for(j=a+1;j<b;j++)
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
        }
      }
     getch();
}

