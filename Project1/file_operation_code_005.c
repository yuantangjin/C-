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
//	printf("������Ŀ���ļ���\n");
//	scanf("%s", filename);
//	fp = fopen(filename, "wb+");
//	if (fp == NULL) {
//		printf("��Ŀ���ļ�ʧ��!");
//		exit(1);
//	}
//	printf("��������Ʒ������\n");
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
//	printf("**************��������Ʒ��Ϣ******************\n");
//	for (i = 1;i <= n;i++) {
//		printf("��������ţ�");
//		scanf("%s", record.id);
//		printf("���������ƣ�");
//		scanf("%s", record.name);
//		printf("������۸�");
//		scanf("%1f", &record.price);
//		printf("������������");
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
//		printf("��ţ�%s  ���ƣ�%s  �۸�%5.2f  ������%d \n", record.id, record.name, record.price, record.count);
//		total = total + record.price * record.count;
//	}
//	printf("�ϼƣ�%5.2f\n", total);
//}
