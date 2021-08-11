//#include<stdio.h>
//void WriteFile(FILE* fp);
//void ReadFile(FILE* fp);
//
//int main(void) {
//	FILE* fp;
//	char inputfile[30];
//
//	printf("请输入文件名：");
//	scanf("%s",inputfile);//输入要打开的文件名
//	fp = fopen(inputfile,"w+");
//
//	if (fp == NULL)
//	{
//		printf("文件打开失败");
//		return 0;
//	}
//	else
//	{
//		printf("文件打开成功");
//		WriteFile(fp);
//		ReadFile(fp);
//		fclose(fp);
//	}
//	return 0;
//}
//void WriteFile(FILE* fp) {
//	char ch;
//
//	printf("请输入文件内容，以#结束！\n");
//	while ((ch=getchar())!= '#')
//	{
//		fputc(ch,fp);
//	}
//	rewind(fp);
//}
//void ReadFile(FILE* fp) {
//	char ch;
//	printf("读取文件内容：\n");
//	ch = fgetc(fp);
//	while (ch!=EOF)
//	{
//		putchar(ch);
//		ch = fgetc(fp);
//	}
//	printf("\n文件读取结束");
//}
//
