 // sum of first of N odd Natural Numbers
 main()
 {
     int i,n,sum=0;
     printf("Enter n value:");
     scanf("%d",&n);
     while(i<=n)
     {
         sum=sum+2*i-1;
         i++;
     }
     printf("Sum=%d",sum);
     getch();
 }
