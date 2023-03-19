#include <stdio.h> // preprocessor
#include <string.h>

int main(void)
{
    int len;
    int length;
    char name[8];

    printf("What is yor name?\n");

    // gets(name); // строковой -  заместо символьного getchar()(не использовать)

    // scanf("%7s", name);

    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    printf("My name is %s\n", name);

    // printf("%d", sizeof(name)); - размер массива

    //   [a] [r] [t] [e] [m]
    //    0   1   2   3   4

    //   length = strlen(name);
    //    printf("%d", length);

    /*
    int goblin_gold = 15;
    int goblin_hp;
    int player_gold = 0;
    char action;

    printf("You attacked byy goblin. 'a'ttack or 'r'unn\n", goblin_hp);

    action = getchar();

    while (action != 'r')
    {

        if (action == 'a' || 'A')
        {
            for (goblin_hp = 3; goblin_hp >= 0; goblin_hp--)
            {
                if (goblin_hp != 3)
                    printf("You kick goblin. Goblin HP: %d \n,", goblin_hp);

                if (goblin_hp == 0 || goblin_hp == 1)
                {
                    printf("You defeat it. \n");
                    player_gold += goblin_gold;
                    printf("You found %d goblin_gold. You have %d gold total\n", goblin_gold, player_gold);
                    break;
                }
            }
        }

        printf("What do you next?\n");
        getchar();
        action = getchar();
    }

    if (action == 'r')
        printf("You've decided to run away!\n");

    return 0;
    */
}
