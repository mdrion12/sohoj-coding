#include <stdio.h>
int main()
{
    char s[1001];
    while (scanf("%s", s) != EOF)
    {
        int freq[10] = {0};
        for (int i = 0; s[i] != '\0'; i++)
        {
            freq[s[i] - '0']++;
        }
        for (int i = 0; i <= 9; i++)
        {
            printf("%d ", freq[i]);
        }
        printf("\n");
    }
}