main()
{
    int i,j,x;
    for(i=1;i<=4;i++)
    {
        x=65;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf("%c",x);
                if(j>=4)
                    x--;
                else
                    x++;
            }
            else
            {
                printf(" ");
                if(j==4)
                {
                    x--;
                }
            }
        }
        printf("\n");
    }
    getch();
}
