#include "stdio.h" //���롰stdio.h��ͷ�ļ�
/*
stdio�ļ���������
"std": ȫ��standard����Ϊ��׼
"io" : ȫ��input output���ֱ���Ϊ���� ���
"h"  : ȫ��headers�� ��Ϊͷ�ļ�
��stdio.hȫ��Ϊstandard input output.header����Ϊ��׼�������ͷ�ļ�
*/
void main(void)
{
	/*getchar() & putchar() ����*/
	/*int getchar(void) ��������Ļ��ȡ��һ�����õ��ַ�������������Ϊһ��������
	���������ͬһ��ʱ����ֻ���ȡһ����һ���ַ���

	putchar(int c) �������ַ��������Ļ�ϣ���������ͬ���ַ���
	���������ͬһ��ʱ����ֻ�����һ����һ���ַ���

	�Ƽ���ѭ����ʹ����������������Ա�����Ļ�������������ַ���*/
	unsigned char input_gc;
	printf("������һ���ַ�:");//��ʾ������ʾ
	input_gc = getchar();//��ȡ�ַ�
	printf("\nYou entered: ");//��ʾ�����ʾ
	putchar(input_gc);//�����������ַ�
	printf("\n");



	/* C �����е� I/O (����/���) ͨ��ʹ�� printf() �� scanf() ����������*/
	//printf() �������͸�ʽ���������׼�������Ļ����
	printf("ending here\r\n");//�˺�����"stdio.h"ͷ�ļ�������
	return;
}