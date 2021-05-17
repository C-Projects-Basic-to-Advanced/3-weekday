#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    do
    {   system("cls");
        printf("Type between 1 and 7 (0 to stop): ");
        scanf("%i", &n);

        switch(n)
        {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        case 0 :
            printf("End of program\n");
            break;
        default:
            printf("Error, dtype a number between 1 and 7\n");
            break;
        }
        system("pause");

    }
    while (n != 0);

    return 0;
}
