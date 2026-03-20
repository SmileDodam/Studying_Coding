#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	double credit = 0, grade_num=0, sum = 0;
	char grade[3];
	double number = 0;
	for (int i = 0; i < 20; i++) {
		scanf("%*s %lf %s", &credit, grade);
		if (strcmp(grade, "P")==0)
			continue;
		number+=credit;
		if (strcmp(grade,"A+")==0)
			grade_num = 4.5;
		else if (strcmp(grade, "A0")==0)
			grade_num = 4.0;
		else if (strcmp(grade, "B+")==0)
			grade_num = 3.5;
		else if (strcmp(grade, "B0")==0)
			grade_num = 3.0;
		else if (strcmp(grade, "C+")==0)
			grade_num = 2.5;
		else if (strcmp(grade, "C0")==0)
			grade_num = 2.0;
		else if (strcmp(grade, "D+")==0)
			grade_num = 1.5;
		else if (strcmp(grade, "D0")==0)
			grade_num = 1.0;
		else
			grade_num = 0;
		sum += grade_num * credit;
	}
	printf("%lf", sum / number);
}