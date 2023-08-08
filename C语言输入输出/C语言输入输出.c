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
	printf("getchar() & putchar() 函数");
	int input_gc;
	printf("请输入一个字符（多于一个字符将读取第一个字符）：");//显示输入提示
	input_gc = getchar();//获取字符，返回整形
	printf("\n你输入了：: ");//显示输出提示
	putchar(input_gc);//输出输入所得以整形表示的字符
	printf("\n");

	/*gets() & puts() 函数*/
	/*
	gets(char* s) 函数从 stdin 读取一行到传入的字符型变量，直到一个终止符或 EOF（end of line）。
	puts(const char *s) 函数把传入的字符串和一个尾随的换行符写入到 stdout。
	*/
	printf("gets() & puts() 函数");
	char gets_input[20];//定义能存下20个字符的变量作为缓冲区

	printf("请输入字符 :");
	gets(gets_input);//读取一行字符并放入所传入的变量

	printf("\n你输入了: ");
	puts(gets_input);//输出用gets函数所读取的字符

	/*scanf() 和 printf() 函数*/
	/*
	int scanf(const char *format, ...) 函数从标准输入流 stdin 读取输入，并根据提供的格式来浏览输入。
	int printf(const char *format, ...) 函数把输出写入到标准输出流 stdout ，并根据提供的格式产生输出。
	格式的表示可以是一个简单的常量字符串，可以分别指定 %s、%d、%c、%f 等来输出或读取字符串、整数、字符或浮点数。
	还有许多其他可用的格式选项，可以根据需要使用。。
	*/
	char str[100];
	int i,n,a,b,c,d;

	printf("输入字符 :");
	scanf("%s %d", str, &i);//输入时，除了字符类型的变量，其余变量都需要加上地址符"&"来确定存放数据的地址
	printf("\n读取结果: %s %d\n ", str, i);
	/*
	假设使用%d读取一个整数，scanf会从第一个非空字符开始读取（遇到空格会跳过）
	因为接收的类型为%d，所以scanf会读取数字
	当读取的数符合要求时便会继续读取下一个字符，直至遇到非该类型字符时结束本次读取，将读取的数据传给变量。
	程序在下一次读取的时候会从上次结束位置的非数字字符开始读取
	当遇到无法识别非数字字符时，scanf便停止读取并将下一个变量赋值为0
	*/

	scanf("%*d%*d%d", &n);
	printf("读取结果：%d", &n);
	//*修饰符用在%和转换字符之间能用于跳过该输入项，所以只有最后一个“%d”读取的数字被存入n中，前两个读取的字符被丢弃。
	
	scanf("%2d%d", &a, &b);
	printf("第一个输入的值为：%d\r\n第二个输入的值为：%d", &a, &b);

	/*
	在%和字母之间加入数字则可使用按字段宽度读取
	scanf会在字符结束或者遇到第一个空白字符结束读取（满足其中一个条件即可）
	*/

	/*将普通字符放在格式化字符之间，可以使scanf按照给定的格式读取*/
	scanf("1:%d,2:%d",&c,&d);
	printf("读取到的字符：%d,%d",&c,&d);

	return;
}