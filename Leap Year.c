// Leap Year or Not
main()
{
    int a;
    printf("Enter a Year:");
    scanf("%d",&a);
    if(a%100==0)
    {
        if(a%400==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not a Leap Year");
        }
    }
    else
    {
        if(a%4==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not a Leap Year");
        }
    }
    getch();
}
