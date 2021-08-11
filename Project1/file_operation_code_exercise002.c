//#include<stdio.h>
//
//int main(void) {
//	FILE* fp;
//	char str[255];
//	
//	printf("请输入一个字符串：\n");
//	gets(str);
//	char fileName[20];
//	printf("请输入文件所在路径及名称：\n");
//	scanf("%s",fileName);
//	if ((fp = fopen(fileName, "a")) == NULL) {
//		printf("文件打开失败");
//		return 0;
//	}
//	fputs(str,fp);
//	fclose(fp);
//	if ((fp = fopen(fileName, "r")) != NULL) {
//		printf("%s文件内容：\n",fileName);
//		while (fgets(str, sizeof(str)+1, fp))
//			printf("%s",str);
//		fclose(fp);
//	}
//	return 0;
//}