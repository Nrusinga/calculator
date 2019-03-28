#include"testcase.h"
// Function prototype declaration
int addition(int p,int q);
int division(int w, int r);
int power1(int l, int m);
// Start of Main Program
int main()
{
    int X=1;
    char Calc_oprn;
    int a,b;

    // Function call
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);

    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': addition(a,b);
                      break;

            case '/': division(a,b);
                      break;

            case '*': power1(a,b);
                      break;

            case 't': assertion();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;

        }
    }
}

//Function Definitions

int addition(int a,int b)
{
    int sum;
    sum=a+b;
    printf("\nthe sum is %d",sum);
    return sum;
}

int division(int a,int b)
{
    int quotient;
    if(b==0)
    {
        printf("Divison not possible");
        return 9;
        return 9;
    }
    quotient=a/b;
    printf("\n the quotient is %d",quotient);
    return quotient;
}
int power1(int a,int b)
{
    int po;
    po=pow(a,b);
    printf("\nthe power is %d",po);
    return(po);
}
