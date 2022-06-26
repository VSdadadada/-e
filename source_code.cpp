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