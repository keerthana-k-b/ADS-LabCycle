#include<stdio.h>
int maxsize=10;
int stack[20];
int top=-1;
int sfull()
{
if(top==maxsize-1)
return 1;
else 
return 0;
}
int sempty()
{
if(top==-1)
return 1;
else
return 0;
}

void  push(int value)
{
if(!sfull())
{
top=top+1;
stack[top]=value;
printf("\n the data %d has been added to the stack.",value);

}

else
{

printf("\n the stack is full");
}
}
void pop()
{
if(!sempty())
{
printf("\n the data %d has been removed from the location %d in the stack",stack[top],top);
top=top-1;

}
else {
printf("\n there is no value to be removed as the stack is empty !");

}
}
void print()
{
if(! sempty())

{
for(int i=top;i>-1;i--)
printf("\n %d", stack[i]);
}
else 
{
printf("\n there is no value to be printed as the stack is empty");
}
}
void main()
{
int select=0;
while(select!=4)
{
printf("\nMenu:\n 1.push \n 2.pop\n 3.print\n 4.exit \n");
scanf("%d",&select);
switch(select)
{
case 1:
{
int data;
printf("\n enter the data to be insert:");
scanf("%d",&data);
push(data);
break;
}
case 2:
pop();
break;
case 3:
{
printf("\n the values in the stack are:");
print();
break;
}
case 5:
{
printf("exiting the program");
break;
default:
printf("invalid option ");
}
}
}
}

