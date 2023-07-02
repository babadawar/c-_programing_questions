#include <stdio.h>

int main() {
    int consumerNumber, pmr, cmr, uc;
    char consumerName[50], connectionType;

    printf("Enter Consumer Number: ");
    scanf("%d", &consumerNumber);

    printf("Enter Consumer Name: ");
    scanf("%s", consumerName);

    printf("Enter Previous Month Reading: ");
    scanf("%d", &pmr);

    printf("Enter Current Month Reading: ");
    scanf("%d", &cmr);

    printf("Enter Connection Type (D for Domestic / C for Commercial): ");
    scanf(" %c", &connectionType);

    uc = cmr- pmr;

    float billAmount ;

    if (connectionType == 'D' || connectionType == 'd') {
        if (uc <= 100)
            billAmount = uc * 1.0;
        else if (uc <= 200)
            billAmount = 100 * 1.0 + (uc - 100) * 2.5;
        else if (uc <= 500)
            billAmount = 100 * 1.0 + 100 * 2.5 + (uc - 200) * 4.0;
        else
            billAmount = 100 * 1.0 + 100 * 2.5 + 300 * 4.0 + (uc - 500) * 6.0;
    } else if (connectionType == 'C' || connectionType == 'c') {
        if (uc <= 100)
            billAmount = uc * 2.0;
        else if (uc <= 200)
            billAmount = 100 * 2.0 + (uc - 100) * 4.5;
        else if (uc <= 500)
            billAmount = 100 * 2.0 + 100 * 4.5 + (uc - 200) * 6.0;
        else
            billAmount = 100 * 2.0 + 100 * 4.5 + 300 * 6.0 + (uc - 500) * 7.0;
    }

    printf("\n-------- Electricity Bill --------\n");
    printf("Consumer Number: %d\n", consumerNumber);
    printf("Consumer Name: %s\n", consumerName);
    printf("Previous Month Reading: %d\n", pmr);
    printf("Current Month Reading: %d\n", cmr);
    printf("Units Consumed: %d\n", uc);
    printf("Bill Amount: Rs. %f\n", billAmount);

    return 0;
}
