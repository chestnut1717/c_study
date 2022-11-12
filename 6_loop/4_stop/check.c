#include <stdio.h>

int main(void){

    int command;
    float credit;
    float debit;
    float balance = 0.0f;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

    for (;;){

        printf("Enter command: ");
        scanf("%d", &command);

        switch (command) {
        case 0:
            balance = 0.0f;
            break;
        case 1:
            printf("Enter amount of credit: ");
            scanf("%f", &credit);
            balance += credit;
            break;
        case 2:
            printf("Enter amount of debit: ");
            scanf("%f", &debit);
            balance -= debit;
            break;
        case 3:
            printf("Current balance: $%.2f\n", balance);
            break;
        case 4:
            // goto 대신 바로 main함수 끝내는 return 해도 좋다!
            goto exit;
        default:
            printf("올바른 명령어를 다시 입력해 주세요\n");
            break;
        }

    }
    exit :
        printf("종료"); 


    return 0;
}