#include <stdio.h>
#include <string.h>
#define N 2000001
int front = 0;
int rear = -1;

int queue[N];

void push(int x)
{
    queue[++rear] = x;
}
void empty(void)
{
    if (rear - front + 1 != 0)
        printf("%d\n", 0);
    else
        printf("%d\n", 1);
}
void pop(void)
{
    if (rear - front + 1 == 0)
        printf("%d\n", -1);
    else
        printf("%d\n", queue[front++]);
}
void size(void)
{
    printf("%d\n", rear - front + 1);
}
void clean(char arr[]){
	int i;
	for(i=0;i<6;i++)
		arr[i]='\0';
}
int main(void)
{
    int n, i, x;
    char command[6];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", command);
        if(!strcmp(command, "push"))
        {
            scanf("%d", &x);
            push(x);
        }
        else if(!strcmp(command, "pop"))
            pop();
        else if(!strcmp(command, "size"))
            size();
        else if(!strcmp(command,"empty"))
			empty();
        else if(!strcmp(command, "front"))
        {
            if (rear - front + 1 == 0)
                printf("%d\n", -1);
            else
                printf("%d\n", queue[front]);
        }
        else if(!strcmp(command,"back")){
			if(rear-front+1==0)
				printf("%d\n", -1);
			else
				printf("%d\n", queue[rear]);
		}
        clean(command);
    }
    return 0;
}