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
    printf("������Ҫ����ӽ���ٸ�e��");
    scanf("%d", &e);
    freopen("ӽe.txt", "w", stdout);
    eee(e);
    fclose(stdout);
    return 0;
}