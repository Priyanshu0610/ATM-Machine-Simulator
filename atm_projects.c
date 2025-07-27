#include <stdio.h>
//ATM MACHINE SIMULATOR//
int main(){

    printf("WELCOME TO MY ATM \n");

    int pin;
    printf("Please Enter your PIN: ");
    scanf("%d",&pin);

    float balance = 1000.0;

    if(pin==1234){
        int choice;
        while(1){
            printf("1.Check balance \n");
            printf("2.Deposit \n");
            printf("3.Withdarw \n");
            printf("4.Exit \n");


           printf("Enter Your Choice: ");
           scanf("%d",&choice);

           switch(choice){
            case 1 : printf("Your Available Balance is: $%.1f",balance);
            break;

            case 2 : {
                float deposit;
                printf("Enter Amount to Deposit:  ");
                scanf("%f",&deposit);

                if(deposit>0){
                    balance += deposit;
                    printf("Deposited $%.1f Successfully. \n",deposit);
                }else{
                    printf("Invalid Deposit Amount ");
                }
break;}
            case 3 : {
                float withdraw;
                printf("Enter Amount To Withdraw: ");
                scanf("%f",&withdraw);

                if(withdraw>0 && withdraw<=balance){
                    balance -= withdraw;
                    printf("Withdrwal of $%.1f successfull. \n",withdraw);

                }else{
                    printf("Insufficient Balnace \n");
                }
break;


            }    
            
             case 4 : printf("Exiting... Thank You");
             return 0;

default : printf("Invalid Choice \n");

           }

        }


    }else{
        printf("Invalid Pin \n");
    }

return 0;
}