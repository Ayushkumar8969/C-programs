// Sum of digits of a given number
 main()
 {
     int n,rem,sum=0;
     printf("Enter n value:");
     scanf("%d",&n);
     while(n)
     {
         rem=n%10;
         sum=sum+rem;
         n=n/10;
     }
     printf("Sum=%d",sum);
     getch();
 }









