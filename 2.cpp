#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push(int element) {
    if (top==MAX-1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top]=element;
    printf("pushed %d in to the stack ",element);
}

int pop() {
    if (top==-1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty ");
	}
	else 
	{
		printf("stack elements :\n");
		for(int i=top;i>=0;i--)
		{
		printf("%d\n",stack[i]);
}
	}
}

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n*factorial(n-1);
}

int fibonacci(int n) {
   if(n==0)
   return 0;
   else if(n==1)
   return 1;
   else
   return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    int choice, num, result,i;
    
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Calculate Factorial\n4. Fibonacci Series\n 5.display\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter a number to push onto the stack: ");
                scanf("%d", &num);
                
                push(num);
                break;
            
            case 2:
                result=pop();
                if(result!=-1)
                {
                printf("Popped element:%d\n", result);
                }
				break;
            
            case 3:
                printf("Enter a number to calculate factorial: ");
                scanf("%d",&num);
                result=factorial(num);
                printf("Factorial of %d is %d\n",num,result);
                break;
            
            case 4:
                printf("Enter the number of terms for the Fibonacci series: ");
                scanf("%d",&num);
                for(i=0;i<num;i++)
                
                printf("%d ",fibonacci(i));
                break;
            
            case 5:
            	display();
            	break;
            
            case 6:
                exit(0);
            
            default:
                printf("Invalid choice\n");
        }
    }
    
    return 0;
}
