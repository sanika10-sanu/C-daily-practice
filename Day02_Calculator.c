#include<stdio.h>
int main()
{float num1,num2,result;
char operator;
printf("enter an operator(+,-,*,/.%):");
scanf("%c",&operator);
printf("enter numbers:");
scanf("%f%f",&num1,&num2);
switch(operator){
case '+':
result = num1 + num2;
printf("%.2lf+ %.2lf = %.2lf\n",num1,num2,result);
break;
case '-':
result = num1 - num2;
printf("%.2lf - %.2lf = %.2lf\n",num1,num2,result);
break;
case '*':
result = num1 * num2;
printf("%.2lf * %.2lf = %.2lf\n",num1,num2,result);
break;
case '/':
  if(num2 != 0){
result = num1 / num2;
printf("%.2f / %.2lf = %.2lf\n",num1,num2,result);
}else{
printf("error:division by zero error");
  }  
break;
default:
   printf("Invalid operator.\n");
}
return 0;
}
