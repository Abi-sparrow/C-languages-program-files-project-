#include <stdio.h>

int main()
{
    int choice, qty, i;
    float bill = 0;

    do
    {
        printf("\n*** ABI HOTEL ***\n");
        printf("1. Chicken Biryani - Rs.180\n");
        printf("2. Chicken 65 - Rs.120\n");
        printf("3. Parotta - Rs.50\n");
        printf("4. Chicken Fried Rice - Rs.150\n");
        printf("5. Ice Cream - Rs.80\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                bill = bill + qty * 180;
                printf("Item added!\n");
                break;

            case 2:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                bill = bill + qty * 120;
                printf("Item added!\n");
                break;

            case 3:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                bill = bill + qty * 50;
                printf("Item added!\n");
                break;

            case 4:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                bill = bill + qty * 150;
                printf("Item added!\n");
                break;

            case 5:
                printf("Enter quantity: ");
                scanf("%d", &qty);
                bill = bill + qty * 80;
                printf("Item added!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

        printf("Do you want to order again? (1-Yes / 0-No): ");
        scanf("%d", &i);

    } while(i != 0);

    printf("\n*** ABI HOTEL BILL ***\n");
    printf("Total Bill = Rs. %.2f\n", bill);

    return 0;
}
