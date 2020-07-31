#include <stdio.h>
#define STACK_SIZE 100
#include <stdbool.h>


int contents[STACK_SIZE];
int top = 0;

void stack_overflow();
void stack_undeflow();

void stack_overflow()
{
  printf("overflow error");
}

void stack_underflow()
{
  printf("undeflow error");
}

void make_empty()
{
  top = 0;
}

bool is_empty(void)
{
	return (top == 0);
}

bool is_full(void)
{ 
    return (top == STACK_SIZE);
}

void push (int i)
{
 if(is_full())
		stack_overflow();
 else
	contents[top++] = i;
}

int pop (void)
{
  if(is_empty())
		stack_underflow();
	else 
	    contents[top] = 0;
		return contents[--top];
}


int main(){

int num,data,i;
	while(1)
{
	scanf("%d%d",&num,&data);
	
	switch(num)
    {
	  case 0 :  //make_empty
	        printf("make_empty\n");
			make_empty();
			break;
	  case 1 :  // push
	        printf("%d�� push\n",data);
			push(data);
	        break;
	  case 2 :
	  	     printf("%d(�ǳ�)�ڸ��� �ִ� %d��  pop\n",top,data);
			 pop();
			 break;
      default : 
            printf("num�� 0~2�߿� ����\n");
			break;	
	}
	
    for(i=0 ; i<STACK_SIZE ; i++)
    printf("%d",contents[i]);
    printf("\n");
	
}


}
