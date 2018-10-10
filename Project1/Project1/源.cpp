//关于switch语句的使用
//一般用于多种情况的语句
//周一 这天的只有一节课,心情还可以.
//周二 这天是满课,我内心是奔溃的
//周三 这天的有几节课我都忘记了 哎 等一下 我看看
//周四 今天早上有一节那个大学生的创新创业课,讲课的老师语言表达能力太差,我不喜欢听她的课
//周五  今天有两节课,但是晚上有没有物理实验我就记不清了
//周六  还行吧 毕竟在放假 可以睡个懒觉
//周日  哎 明天又要上课了 我内心是奔溃的
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()
{
	int day;
	printf("请问你想了解我周几的心情,请输入1-7:");
	scanf("%d", &day);
	switch (day)
	{
	case1:printf("周一 这天的只有一节课,心情还可以\n");
		  break;
	case 2:printf("周二 这天是满课,我内心是奔溃的\n");
		  break;
	case 3:printf("周三 这天的有几节课我都忘记了 哎 等一下 我看看\n");
		  break;
	case 4:printf("周四 今天早上有一节那个大学生的创新创业课,讲课的老师语言表达能力太差,我不喜欢听她的课\n");
		  break;
	case 5:printf("周五  今天有两节课,但是晚上有没有物理实验我就记不清了\n");
		  break;
	case 6:printf("周六 还行吧 毕竟在放假 可以睡个懒觉\n");
		  break;
	case 7:printf("周日 哎 明天又要上课了 我内心是奔溃的\n");
		  break;
	default:printf("请输入正确的日期\n");//default语句类似else，如果不输入1到7的正确日期就显示这个语句。
		break;
	}
	system("pause");
}
