//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	FILE* in, * out;
//	char infile[50], outfile[50];
//	char s[256];
//
//	printf("请输入源文件名：");
//	scanf("%s",infile);
//	printf("请输入目标文件名：");
//	scanf("%s",outfile);
//	if ((in = fopen(infile, "r")) == NULL) {
//		printf("打开文件%s失败\n",infile);
//		exit(0);
//	}
//	if ((out = fopen(outfile, "w")) == NULL) {
//		printf("不能建立%s文件\n",outfile);
//		exit(0);
//	}
//	while (fgets(s, 256, in))
//		fputs(s, out);
//	printf("文件复制完成\n");
//	fclose(in);
//	fclose(out);
//	return 0;
//}
