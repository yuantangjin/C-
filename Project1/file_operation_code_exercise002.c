//#include<stdio.h>
//
//int main(void) {
//	FILE* fp;
//	char str[255];
//	
//	printf("������һ���ַ�����\n");
//	gets(str);
//	char fileName[20];
//	printf("�������ļ�����·�������ƣ�\n");
//	scanf("%s",fileName);
//	if ((fp = fopen(fileName, "a")) == NULL) {
//		printf("�ļ���ʧ��");
//		return 0;
//	}
//	fputs(str,fp);
//	fclose(fp);
//	if ((fp = fopen(fileName, "r")) != NULL) {
//		printf("%s�ļ����ݣ�\n",fileName);
//		while (fgets(str, sizeof(str)+1, fp))
//			printf("%s",str);
//		fclose(fp);
//	}
//	return 0;
//}