//#include" libgyp.h"
#include<stdio.h>
#include<stdlib.h>
#define DEBUG 0
#define True  1
#define False 0
#define Seperator_Num 5
int  Decimal_To_Binary( int decimal,int ret[]);

int main()
{
	printf("0 exit!\n");
while (True)
 {
	
	int  t_loop = 0;
	int ret[32];
	int  input   = 32;
	printf("Input :");
	scanf("%d",&input);
	if(input <= 0)
	{
		return 0;
	}
	
	printf("十进制:%d\n",input);

	for(t_loop = 0;t_loop < 32;t_loop++)
	{
		ret[t_loop] =  2;
	}
	
	int digits = Decimal_To_Binary(input,ret);
	
	printf("二进制:");
	for(t_loop = digits;t_loop >= 0 ;t_loop--)
	{
		if (ret[t_loop] == 2)
		{
			break;
		}
		//printf("I feel puzzled!");
		
			
		if (ret[t_loop] != 3)
		{
			printf("%d",ret[t_loop]);
		} else
		{
			printf(" ");
		}
		 
	}
	printf("\n");
 }
	
}


int  Decimal_To_Binary( int decimal,int ret[])
{
	 int i = 0;
     int remainder = 0;
	 
	
	while (decimal != 1 )  //商不可能为0  无需判断
	{ 
	  if( i%Seperator_Num != 4)
	  {
	  remainder = decimal%2;
	  decimal = decimal/2;
	  ret[i] = remainder;
	  } else{
		 ret[i] = 3; 
	  }
	  i++;
	}
	if( i%Seperator_Num == 4)
	{
		 ret[i] = 3; 
		 i++;
	}
	ret[i] = 1; //最高位一定是1
	return i;
	
}





/**

犯的几处错误：  1、 之前用char[]类型存储转移后的字符，但是（还没搞懂原因）没有输出
                


缺陷： 转换后的数字只是显示作用，没有封装成可用的数据格式；
       当前版本 对非正数无法处理，
	   缺少队列，手动输出，与第一条相关，方案一：自己实现队列，二使用c/c++编程；
	   
**/
















