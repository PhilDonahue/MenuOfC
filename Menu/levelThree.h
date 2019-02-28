#ifndef levelThree_h
#define levelThree_h


void levelThree(char, char);


void levelThree(char ch, char prob) {
	extern char lvl;
	char choice = 3;
	char str[30];
	char c;


	/* 读取用户选择 */
	system("cls");
	choose:
	printf("第%d章 第%d题\n", ch, prob);
	printf("题目描述\n");
	printf("1.运行程序\n2.查看源码\n-1.返回上级\n0.退出程序\n");
	scanf_s("%hhd", &choice);


	/* 传回用户选择 */
	switch (choice) {
		case -1:
			lvl = 2;
			return 0;


		case 0:
			lvl = 0;
			return 0;


		case 1:
			sprintf_s(str, "\\static\\exe\\%d_%d.exe", ch, prob);
			system(str);
			system("cls");
			goto choose;


		case 2: // 需要整理一下
			system("cls");
			sprintf_s(str, "type .\\static\\codes\\%d_%d.c", ch, prob);
			system(str);
			system("cls");
			goto choose;


		default:
			system("cls");
			printf("Fail! Input illegal.\n");
			goto choose;
	}
}
#endif // !levelThree_h