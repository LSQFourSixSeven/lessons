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
	printf("getchar() & putchar() ����");
	int input_gc;
	printf("������һ���ַ�������һ���ַ�����ȡ��һ���ַ�����");//��ʾ������ʾ
	input_gc = getchar();//��ȡ�ַ�����������
	printf("\n�������ˣ�: ");//��ʾ�����ʾ
	putchar(input_gc);//����������������α�ʾ���ַ�
	printf("\n");

	/*gets() & puts() ����*/
	/*
	gets(char* s) ������ stdin ��ȡһ�е�������ַ��ͱ�����ֱ��һ����ֹ���� EOF��
	puts(const char *s) �����Ѵ�����ַ�����һ��β��Ļ��з�д�뵽 stdout��
	*/
	printf("gets() & puts() ����");
	char gets_input[20];//�����ܴ���20���ַ��ı�����Ϊ������

	printf("�������ַ� :");
	gets(gets_input);//��ȡһ���ַ�������������ı���

	printf("\n��������: ");
	puts(gets_input);//�����gets��������ȡ���ַ�





	/* C �����е� I/O (����/���) ͨ��ʹ�� printf() �� scanf() ����������*/
	//printf() �������͸�ʽ���������׼�������Ļ����
	printf("ending here\r\n");//�˺�����"stdio.h"ͷ�ļ�������
	return;
}