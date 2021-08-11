//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Rec {
//	char id[10];
//	char name[20];
//	float price;
//	int count;
//}Rec;
//int main(void) {
//	char filename[20];
//	FILE* fp;
//	int m;
//	Rec record;
//	printf("请输入商品信息文件：\n");
//	scanf("%s",filename);
//	fp = fopen(filename, "rb");
//	if (fp == NULL) {
//		printf("打开文件失败");
//		exit(1);
//	}
//	while (fread(&record, sizeof(Rec), 1, fp)) {
//		printf("%s  名称：%s  价格：%5.2f  数量：%d\n", record.id, record.name, &record.price, &record.count);
//	}
//	printf("请输入要读取的商品记录号：\n");
//	scanf("%d", &m);
//	fseek(fp, (m - 1) * sizeof(Rec), 0);
//	fread(&record, sizeof(Rec), 1, fp);
//	printf("第%d条记录\n序号：%s  名称：%s  价格：%5.2f  数量：%d\n", m, record.id, record.name, record.price, record.count);
//	fclose(fp);
//	return 0;
//}