#include<stdio.h>
int main()
 {
int a,b;
int op;
printf("1.add\n 2.sub\n 3.mul\n 4.div\n ");
printf("enter the value of a and b");
scanf("%d%d", &a,&b);
printf("enter your choice");
scanf("%d",&op);
switch (op)
{
case 1 :
printf("sum of %d and %d : %d\n",a,b,a+b);
    break;
case 2 :
printf("sub of %d and %d:%d\n",a,b,a-b);
break;
case 3 :
printf("mul of %d and %d : %d\n",a,b,a*b);
break;
case 4 :
printf("div of %d and %d : %d\n",a,b,a/b);
break;   
default:
printf("enter your carrect choice:");
    break;
    return 0;
}

}