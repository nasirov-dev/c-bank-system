#include <stdio.h>

struct Account {

	
	char name[100];
	int account_number;
	double balance;
};

int main(){

	struct Account user = {"Murad", 2008, 500.00};
	int choice;
	double amount;
	
	printf("Welcome, %s\n", user.name);
	printf("Your account number: %d ", user.account_number);
	printf("\nYour balance: %.2f\n", user.balance);
	
while (1){

	printf("\n=== ATM OPERATIONS ===\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money \n");
    printf("3. Withdraw Money \n");
    printf("4. Exit\n");
    
    
    printf("Please enter the operation: (1-4):  ");
    scanf("%d", &choice);
    
    switch(choice){
    	
    	case 1:
    		
    		printf("\nYour current balance: %.2f AZN\n", user.balance);
            break;
            
        case 2:
        	printf("\nEnter the amount to deposite:  ");
        	scanf("%lf", &amount);
        	if (amount > 0){
        		
        		user.balance = user.balance + amount;
        		printf("Success! New balance: %.2f AZN\n", user.balance);
        		
			}
			else {
				
				printf("Invalid amount\n");
	
			}
			break;
		case 3:
			printf("\nEnter the amount to withdraw: ");
			scanf("%lf", &amount);
			
			if (amount > 0 && amount <= user.balance){
				
				user.balance = user.balance - amount;
				printf("Success! Remaining balance: %.2f AZN\n", user.balance);
	       }
			else if(amount > user.balance){
				
				 printf("It's not enough the amount!\n");
			} else{
				
				printf("Invalid amount!\n");
			}
			break;
		case 4:
			printf("\nThank you for using our bank. Goodbye!\n");
			return 0;
		default:
			printf("\nInvalid choice. Please enter valid number!");
			
			
	} 
 }
    return 0;
}
