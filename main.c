#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void montyHall(int door[], char choice)
{
    int i, r, ans;
    char d;

    if(choice == 'A')
    {
        if(door[1] == 0 && door[2] == 0)
        {
            r = (rand()%2) + 1;
            if(r == 1)
                d = 'B';
            else
                d = 'C';
            printf("Door %c has a goat\n", d);
        }
        else if(door[1] == 1 && door[2] == 0)
        {
            printf("Door C has a goat\n");
        }
        else
        {
            printf("Door B has a goat\n");
        }
        while(1)
        {
            printf("\nDo you want to switch your choice? (0/1): \n");
            scanf("%d",&ans);
            if(ans == 0 || ans == 1)
                break;
            else
                printf("0 for 'no', 1 for 'yes'\n\n");
        }
        if(ans == 1)
        {
            if(door[1] == 0 && door[2] == 0)
            {
                printf("You lost\n");
                if(r == 1)
                    printf("Door C has a goat\n");
                else
                    printf("Door B has a goat\n");
            }
            else if(door[1] == 1 && door[2] == 0)
                printf("You won!\nDoor B has the car\n");
            else
                printf("You won!\nDoor C has the car\n");
        }
        else
        {
            if(door[1] == 0 && door[2] == 0)
                printf("You won\nDoor A has the car!\n");

            else if(door[1] == 1 && door[2] == 0)
                printf("You lost!\nDoor B has the car\n");
            else
                printf("You lost!\nDoor C has the car\n");
        }
    }
    else if(choice == 'B')
    {
        if(door[0] == 0 && door[2] == 0)
        {
            while(1)
            {
                r = (rand() % 3);
                if (r == 0 || r == 2)
                    break;
            }
            if(r == 0)
                d = 'A';
            else
                d = 'C';
            printf("Door %c has a goat\n", d);
        }
        else if(door[0] == 1 && door[2] == 0)
            printf("Door C has a goat\n");
        else
            printf("Door A has a goat\n");

        while(1)
        {
            printf("\nDo you want to switch your choice? (0/1): \n");
            scanf("%d",&ans);
            if(ans == 0 || ans == 1)
                break;
            else
                printf("0 for 'no', 1 for 'yes'\n\n");
        }
        if(ans == 1)
        {
            if(door[0] == 0 && door[2] == 0)
            {
                printf("You lost\n");
                if(r == 0)
                    printf("Door C has a goat\n");
                else
                    printf("Door A has a goat\n");
            }
            else if(door[0] == 1 && door[2] == 0)
                printf("You won!\nDoor A has the car\n");
            else
                printf("You won!\nDoor C has the car\n");
        }
        else
        {
            if(door[0] == 0 && door[2] == 0)
                printf("You won!\nDoor B has the car\n");
            else if(door[0] == 1 && door[2] == 0)
                printf("You lost!\nDoor A has the car\n");
            else
                printf("You lost!\nDoor C has the car\n");
        }
    }
    else
    {
        if(door[0] == 0 && door[1] == 0)
        {
            while(1)
            {
                r = (rand() % 3);
                if (r == 0 || r == 1)
                    break;
            }
            if(r == 0)
                d = 'A';
            else
                d = 'B';
            printf("Door %c has a goat\n", d);
        }
        else if(door[0] == 1 && door[1] == 0)
            printf("Door B has a goat\n");
        else
            printf("Door A has a goat\n");

        while(1)
        {
            printf("\nDo you want to switch your choice? (0/1): \n");
            scanf("%d",&ans);
            if(ans == 0 || ans == 1)
                break;
            else
                printf("0 for 'no', 1 for 'yes'\n\n");
        }

        if(ans == 1)
        {
            if(door[0] == 0 && door[1] == 0)
            {
                printf("You lost\n");
                if(r == 0)
                    printf("Door B has a goat\n");
                else
                    printf("Door A has a goat\n");
            }
            else if(door[0] == 1 && door[1] == 0)
                printf("You won!\nDoor A has the car\n");
            else
                printf("You won!\nDoor B has the car\n");
        }
        else
        {
            if(door[0] == 0 && door[1] == 0)
                printf("You won!\nDoor C has the car\n");
            else if(door[0] == 1 && door[1] == 0)
                printf("You lost!\nDoor A has the car\n");
            else
                printf("You lost!\nDoor B has the car\n");
        }
    }
}
int main()
{
    char choice;

    srand(time(NULL));
    int door[3] = {0};
    door[rand()%3] = 1;

    printf("THE MONTY HALL PROBLEM\n");
    printf("----------------------\n");
    printf("\nRULES:\n\n");
    printf("1. There are 3 doors, Door A, Door B & Door C.\n");
    printf("2. 2 doors have goats & 1 door has a car behind it.\n");
    printf("3. The game is to guess the door having the car.\n");
    printf("4. After you make your choice, a wrong answer will be eliminated.\n");
    printf("5. You will be given a chance to either switch or stick with your initial pick.\n\n");

    printf("------\t\t------\t\t------\n");
    printf("|    |\t\t|    |\t\t|    |\n");
    printf("|    |\t\t|    |\t\t|    |\n");
    printf("------\t\t------\t\t------\n");
    printf("Door A\t\tDoor B\t\tDoor C\n");

    printf("\nPick any one door (A, B or C):\n");
    scanf("%c",&choice);

    printf("\n");

    montyHall(door, choice);

    return 0;
}
