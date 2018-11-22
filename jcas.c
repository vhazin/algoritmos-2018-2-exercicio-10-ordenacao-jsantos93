#include <stdio.h>
#include <string.h>

void bubblesort(char *s[100], int n);

int main()
{

    char good;
    int num_name, counter;

    scanf("%d", &num_name);
    char children_list[num_name][20];

    for (int i = 0; i < num_name; i++)
    {
        scanf(" %c ", &good);
        if (good == '+')
        {
            counter++;
        }
        scanf("%s", children_list[i]);
    }

    bubblesort(children_list, num_name);

    for (int i = 0; i < num_name; i++)
    {
        printf("%s\n", children_list[i]);
    }
    printf("%d\n", counter);

    return 0;
}

void bubblesort(char *s[100], int n)
{
    int i, j, cmp;
    char tmp[1][20];

    //bubble sorting of words
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1; j++)
        {
            cmp = strcmp(s[j], s[j + 1]);

            if (cmp > 0)
            {
                strcpy(tmp[0], s[j + 1]);
                strcpy(s[j + 1], s[j]);
                strcpy(s[j], tmp[0]);
            }
        }
}