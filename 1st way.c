#include <stdio.h>
#include <string.h>
#include <stdbool.h> 
// encrypted function 
void firstencrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] - key;
    }
}
// decrypted function 
void firstdecrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] + key;
    }
}
// stsrting the program
int main(){

while(1)
{
	//bool working = true;
   // making the program running forever
    do{
    int program = 0;
	char password[100] ;

	
	 // taking the sentence / word from the user
	printf("Enter the password: \n ");
    scanf("%s",&password);
	int operation;
	printf("exit :0 \nencrypted :1 \ndycrepted :2 \n");
	scanf("%d",&operation);
   
    //when the user chooses the operation we have 4 Scenarios
	// 1st is to be encrypted 
    if (operation==1){
    	printf("Password     = %s\n",password);
		firstencrypt(password,0xFACA);
    	printf("Encrypted value = %s\n",password);
	}
	//2nd is to be dycrepted
	else if (operation==2){
		printf("Password     = %s\n",password);
		firstdecrypt(password,0xFACA);
    	printf("Decrypted value = %s\n",password);
    }
    //3rd is to exit the program
    else if (operation==0)
	{
		printf("Quitting the program...\n\n");
		return 0 ;
    }
    // 4th is to enter invalid num
    else 
	{
    	printf("invalid!");
	}
}
while (1);
	return 0;

}}
