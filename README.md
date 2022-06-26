#### -e

It is a program that prints a lot of e

这是一个咏e文件![滑稽](https://tb2.bdstatic.com/tb/editor/images/face/i_f25.png)

```c++
#include <cstdio>
void eee(int e)
{
	if (e == 0)
	{
		return;
	}
	putchar('e');
	eee(--e);
}
int main()
{
	int e;
	printf("请问您要作死咏多少个e？");
	scanf("%d", &e);
	freopen("咏e.txt", "w", stdout);
	eee(e);
	fclose(stdout);
	return 0;
}
```

Please use this program after unzip it, otherwise there is no effect!

请在解压之后使用此程序，否则没有效果！
