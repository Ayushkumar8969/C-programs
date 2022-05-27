main()
{
    int i,j,flag=0;
    for(j=2;j<=100;j++)
    {
       for(i=2;i<=j/2;i++)
       {
          if(j%i==0)
          {
             flag=1;
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
