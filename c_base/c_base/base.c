#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//基础数据类型
//int main() {
//	int age = 20;
//
//	char name = 'haha';
//
//	short num = 10;
//
//	//long
//	//long long
//	
//	float weight = 70;
//
//	double height = 180;
//	
//	return 0;
//	
//}


//int main(){
//	/*sizeof计算类型，变量大小*/
//	printf("long long:%d\n",sizeof(long long));
//	printf("char:%d\n", sizeof(char));
//	printf("int:%d\n", sizeof(int));
//	printf("short:%d\n", sizeof(short));
//	printf("long:%d\n", sizeof(long));
//	printf("float:%d\n", sizeof(float));
//	printf("double:%d\n", sizeof(double));
//  return 0;
//}


//常量与变量
//int main() {
//	int age = 20;
//	double weight = 70;
//
//	age++;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}


//全局变量和外部定义
//int a = 100;
//
//int main() {
//	int a = 10;
//
//	//局部变量优先
//	printf("%d", a); //a=10
//	return 0;
//}


//写一个求两数之和
//int main() {
//	int a = 0;
//	int b = 0;
//	/*int sum = 0;*/
//	scanf("%d %d", &a, &b);
//	/*sum = a + b;*/
//	printf("sum=%d",a+b);
//	return 0;
//}