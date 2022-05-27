main()
{
    int a,i,j;
    printf("Enter a value:");
    scanf("%d",&a);
    for(j=a+1;;j++)
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
           printf("%d",j);
           break;
        }
      }
     getch();
}


