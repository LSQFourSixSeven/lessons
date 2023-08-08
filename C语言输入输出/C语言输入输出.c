#include "stdio.h" //引入“stdio.h”头文件
/*
stdio文件名解析：
"std": 全称standard，译为标准
"io" : 全称input output，分别译为输入 输出
"h"  : 全称headers， 译为头文件
则stdio.h全称为standard input output.header，译为标准输入输出头文件
*/
void main(void)
{
	/*getchar() & putchar() 函数*/
	/*int getchar(void) 函数从屏幕读取下一个可用的字符，并把它返回为一个整数。
	这个函数在同一个时间内只会读取一个单一的字符。

	putchar(int c) 函数把字符输出到屏幕上，并返回相同的字符。
	这个函数在同一个时间内只会输出一个单一的字符。

	推荐在循环内使用这个两个方法，以便在屏幕上输入输出多个字符。*/
	unsigned char input_gc;
	printf("请输入一个字符:");//显示输入提示
	input_gc = getchar();//获取字符

	printf("\nYou entered: ");//显示输出提示
	putchar(input_gc);//输出所输入的字符
	printf("\n");



	/* C 语言中的 I/O (输入/输出) 通常使用 printf() 和 scanf() 两个函数。*/
	//printf() 函数发送格式化输出到标准输出（屏幕）。
	printf("ending here\r\n");//此函数在"stdio.h"头文件中申明
	return;
}