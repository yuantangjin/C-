//#include<stdio.h>
//
//typedef struct Rec
//{
//	char id[10];
//	char name[20];
//	float price;
//	int count;
//}Rec;
//
//void WriteFile(FILE* fp, int n);
//void ReadFile(FILE* fp, int n);
//
//int main(void) {
//	char filename[256];
//	int n;
//	FILE* fp;
//	printf("������Ŀ���ļ���\n");
//	scanf("%s", filename);
//	fp = fopen(filename, "w+");
//	if (fp == NULL) {
//		printf("���ļ�ʧ��");
//		return 0;
//	}
//	printf("��������Ʒ������\n");
//	scanf("%d", &n);
//	WriteFile(fp, n);
//	ReadFile(fp, n);
//	fclose(fp);
//	return 0;
//}
//
//void WriteFile(FILE* fp,int n) {
//	int i;
//	Rec record;
//	printf("******************��������Ʒ����***************\n");
//	for (i = 1;i <= n;i++)
//	{
//		printf("��������ţ�");
//		scanf("%s", record.id);
//		printf("���������ƣ�");
//		scanf("%s", record.name);
//		printf("������۸�");
//		scanf("%f", &record.price);
//		printf("������������");
//		scanf("%d", &record.count);
//		printf("\n");
//		fprintf(fp, "%s %s %5.2f %d\n", record.id, record.name, record.price, record.count);
//	}
//}
//void ReadFile(FILE* fp, int n) {
//	Rec record;
//	double total = 0;
//	
//	rewind(fp);
//	while (fscanf(fp, "%s %s %f %d\n", record.id, record.name, &record.price, &record.count) != EOF)
//	{
//		printf("��ţ�%s ���ƣ�%s �۸�%5.2f ������%d \n", record.id, record.name, record.price, record.count);
//		total = total + record.price * record.count;
//	}
//	printf("�ϼƣ�%5.2f\n",total);
//}