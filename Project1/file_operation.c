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
//	printf("��������Ʒ��Ϣ�ļ���\n");
//	scanf("%s",filename);
//	fp = fopen(filename, "rb");
//	if (fp == NULL) {
//		printf("���ļ�ʧ��");
//		exit(1);
//	}
//	while (fread(&record, sizeof(Rec), 1, fp)) {
//		printf("%s  ���ƣ�%s  �۸�%5.2f  ������%d\n", record.id, record.name, &record.price, &record.count);
//	}
//	printf("������Ҫ��ȡ����Ʒ��¼�ţ�\n");
//	scanf("%d", &m);
//	fseek(fp, (m - 1) * sizeof(Rec), 0);
//	fread(&record, sizeof(Rec), 1, fp);
//	printf("��%d����¼\n��ţ�%s  ���ƣ�%s  �۸�%5.2f  ������%d\n", m, record.id, record.name, record.price, record.count);
//	fclose(fp);
//	return 0;
//}