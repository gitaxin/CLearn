#define _CRT_SECURE_NO_DEPRECATE

#include  <stdio.h>
#include <string.h>
//结构体
struct Book {
	char name[20];//书名
	short price;//价格


};


int main() {
	struct Book b1 = {
		"C语言",60
	};


	printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);
	b1.price = 50;

	printf("修改后的价格:%d\n", b1.price);

	strcpy(b1.name, "C++");
	printf("修改后的书名:%s\n", b1.name);

	struct Book* pb = &b1;
	printf("%p\n", pb);
	//点操作符: 结构体变量->成员
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);

	//箭头操作符:结构体指针->成员
	printf("%s\n", pb -> name);
	printf("%d\n", pb -> price);


	return 0;
}