//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	FILE* in, * out;
//	char infile[50], outfile[50];
//	char s[256];
//
//	printf("������Դ�ļ�����");
//	scanf("%s",infile);
//	printf("������Ŀ���ļ�����");
//	scanf("%s",outfile);
//	if ((in = fopen(infile, "r")) == NULL) {
//		printf("���ļ�%sʧ��\n",infile);
//		exit(0);
//	}
//	if ((out = fopen(outfile, "w")) == NULL) {
//		printf("���ܽ���%s�ļ�\n",outfile);
//		exit(0);
//	}
//	while (fgets(s, 256, in))
//		fputs(s, out);
//	printf("�ļ��������\n");
//	fclose(in);
//	fclose(out);
//	return 0;
//}
