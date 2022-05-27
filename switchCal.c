main()
{
    int a=5,b=6,c;
    char ch;
    printf("Enter operator:");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':c=a+b;
                 printf("%d",c);
                 break;
        case '-':c=a-b;
                 printf("%d",c);
                 break;
        case '*':c=a*b;
                 printf("%d",c);
                 break;
        case '/':c=a/b;
                 printf("%d",c);
                 break;
    }
    getch();
}
