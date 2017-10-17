#include <stdio.h>
#include <conio.h>


int main(){


char a; 
int b=49;
int i,c; 


printf("종료하려면 q를 입력하세요.\n");

while( (a=getch()) != 'q')
{


if(a==b) putch(a);

for(i=1;i<9;i++)
{
	if(a==b+i) for(c=0;c<=i;c++) putch(a);
}

printf("\n");
}

return 0;
}

