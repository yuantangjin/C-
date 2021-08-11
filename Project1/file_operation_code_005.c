//#include <stdio.h>
//#include<stdlib.h>
//typedef struct Rec {
//	char id[10];
//	char name[20];
//	float price;
//	size_t count;
//}Rec;
//
//void WriteFile(FILE* fp, int n);
//void ReadFile(FILE* fp, int n);
//int main(void) {
//	char filename[20];
//	int n;
//	FILE* fp;
//	printf("请输入目标文件：\n");
//	scanf("%s", filename);
//	fp = fopen(filename, "wb+");
//	if (fp == NULL) {
//		printf("打开目标文件失败!");
//		exit(1);
//	}
//	printf("请输入商品数量：\n");
//	scanf("%d", &n);
//	WriteFile(fp, n);
//	ReadFile(fp, n);
//	fclose(fp);
//	return 0;
//}
//
//void WriteFile(FILE* fp, int n) {
//	int i;
//	Rec record;
//	printf("**************请输入商品信息******************\n");
//	for (i = 1;i <= n;i++) {
//		printf("请输入序号：");
//		scanf("%s", record.id);
//		printf("请输入名称：");
//		scanf("%s", record.name);
//		printf("请输入价格：");
//		scanf("%1f", &record.price);
//		printf("请输入数量：");
//		scanf("%d", &record.count);
//		printf("\n");
//		fwrite(&record, sizeof(Rec), 1, fp);
//	}
//}
//void ReadFile(FILE* fp, int n) {
//	Rec record;
//	float total = 0;
//
//	rewind(fp);
//	while (fread(&record, sizeof(Rec), 1, fp))
//	{
//		printf("序号：%s  名称：%s  价格：%5.2f  数量：%d \n", record.id, record.name, record.price, record.count);
//		total = total + record.price * record.count;
//	}
//	printf("合计：%5.2f\n", total);
//}
