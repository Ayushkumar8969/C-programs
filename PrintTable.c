// Print Table of User's choice
main()
{
  int n,i=1;
  printf("Enter n Value:");
  scanf("%d",&n);
  while(i<=10)
  {
    printf("%dx%d=%d\n",n,i,n*i);
    i++;
  }
  getch();
}
