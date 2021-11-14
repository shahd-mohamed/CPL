#include<stdio.h>
#include <stdbool.h>
#include <string.h>
//encrypted function
void encrypted (char message[],char ch, int key)
{
	 int i;
	for( i = 0; message[i] != '\0'; ++i)	
	{
		ch = message[i];
		if(ch >= 'a' && ch <= 'z')
		{	
			ch = ch + key;
			if(ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch + key;
			if(ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			message[i] = ch;
		}
	}
}

//decrypted function
void  decrypt(char message[],char ch, int key)
{
	int i;
	for(i = 0; message[i] != '\0'; ++i)
	{
		ch = message[i];
		if(ch >= 'a' && ch <= 'z')
		{
			ch = ch + key;
			if(ch > 'z')
			{
				ch = ch + 'z' - 'a' + 1;
			}
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch + key;
			if(ch > 'Z')
			{
				ch = ch + 'Z'- 'A' + 1;
			}
		message[i] = ch;
		}
	}	
}

int main()
{
	// keep the method working until the user exits
	while (1){
	// initializing the variables
	char message[100], ch;
	int i=0,operation, key;
   // taking the massege from the user 
	printf("Enter a message to encrypt: ");
	scanf("%s",message);
	// choosing encrypted or decrypted
	printf("exit :0 \nencrypted :1 \ndycrepted :2 \n");
	scanf("%d",&operation);
	// give the user tha ability to choose the key they wanted
	printf("Enter key: ");
	scanf("%d", &key);
    //the user choise and excution of every one
	if (operation==1)
	{	
		encrypted (message,ch, key);
	}
	else if (operation==0){
		return 0 ;
	}
	else if(operation==2)
	{
		decrypt (message,ch, key);
	}

	else 
	{
		printf("invalied");
		return 0;
	}
	printf("Encrypted message: %s\n", message);
	}

	return 0;
	}
