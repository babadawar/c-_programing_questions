#include<stdio.h>
int main(){
    float consumerno,pmr,cmr,amount,uc;
    char consumername[50],connectiontype[1];
    printf("consumer number : ");
    scanf("%d",&consumerno);
    printf("consumername : ");
    printf("previous month reading : ");
    scanf("%d",&pmr);
     printf("current month reading : ");
    scanf("%d",&cmr);
    printf("connnection type (type D for domestic and c for commercial) : ");
    scanf("%s",&connectiontype);
    uc=cmr-pmr;

    float billAmount;
    if(connectiontype == 'D' || connectiontype == 'd'){
       if (uc <= 100)
            billAmount = uc * 1.0;
        else if (uc <= 200)
            billAmount = 100 * 1.0 + (uc - 100) * 2.5;
        else if (uc <= 500)
            billAmount = 100 * 1.0 + 100 * 2.5 + (uc - 200) * 4.0;
        else
            billAmount = 100 * 1.0 + 100 * 2.5 + 300 * 4.0 + (uc - 500) * 6.0;  
    }
    else if (connectiontype == 'C' || connectiontype == 'c') {
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
    printf("Consumer Number: %d\n", consumerno);
    printf("Consumer Name: %s\n", consumername);
    printf("Previous Month Reading: %d\n", pmr);
    printf("Current Month Reading: %d\n", cmr);
    printf("Units Consumed: %d\n", uc);
    printf("Bill Amount: Rs. %f\n", billAmount);
    return 0;
}