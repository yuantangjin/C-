//#include<stdio.h>
//void WriteFile(FILE* fp);
//void ReadFile(FILE* fp);
//
//int main(void) {
//	FILE* fp;
//	char inputfile[30];
//
//	printf("�������ļ�����");
//	scanf("%s",inputfile);//����Ҫ�򿪵��ļ���
//	fp = fopen(inputfile,"w+");
//
//	if (fp == NULL)
//	{
//		printf("�ļ���ʧ��");
//		return 0;
//	}
//	else
//	{
//		printf("�ļ��򿪳ɹ�");
//		WriteFile(fp);
//		ReadFile(fp);
//		fclose(fp);
//	}
//	return 0;
//}
//void WriteFile(FILE* fp) {
//	char ch;
//
//	printf("�������ļ����ݣ���#������\n");
//	while ((ch=getchar())!= '#')
//	{
//		fputc(ch,fp);
//	}
//	rewind(fp);
//}
//void ReadFile(FILE* fp) {
//	char ch;
//	printf("��ȡ�ļ����ݣ�\n");
//	ch = fgetc(fp);
//	while (ch!=EOF)
//	{
//		putchar(ch);
//		ch = fgetc(fp);
//	}
//	printf("\n�ļ���ȡ����");
//}
//
