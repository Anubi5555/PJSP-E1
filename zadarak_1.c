# include <stdio.h>
# include <string.h>

#define MAX_LEN 31

int main()
{
    int broj = 0;
    char c;
    char str [MAX_LEN];

    gets (str);
    scanf("%c", &c);

    for (int i; i<MAX_LEN; i++)
    {
        if (strstr(i,c));
            broj ++;
    }
    printf("%d", broj);

}