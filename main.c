#include <stdio.h>
int main()
{
    int num;
    float num2;
    double num3;
    char name;

    printf("enter int number:");
    scanf("%d",&num);
    printf("enter float number:");
    scanf("%f",&num2);
    printf("enter double number:");
    scanf("%lf",&num3);
    printf("enter character:");
    scanf(" %c",&name);

    printf("int is: %d\n",num);
    printf("float is: %f\n",num2);
    printf("double is: %lf\n",num3);
    printf("char is: %c\n",name);

return 0;
}
