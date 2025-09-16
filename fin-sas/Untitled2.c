#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct word_info{
  char txt[2000];
  char words[50];
  int occurence;
  int len;
  int len2;
};

struct word_info w1;//give the structures a way to be declared
int count = 0;

void remove_anamolys()
{
	char text[2000];
	
	int i;
	
	int j = 0;
	
    
    
    fgets(text , sizeof(text) , stdin);
    
    text[strcspn( text , "\n")]='\0';
    
    strlwr(text);//lower text
    
    w1.len = strlen(text);//register lenght for later
    
    for(i = 0 ; i < w1.len ; i++)
    {
    	if(!ispunct(text[i]))//remove punct
    	{
    		text[j++] = text[i];
		}
	}
	text[j] = '\0';//removes the puncts at the end
	
    w1.len = strlen(text);//register lenght for later
    
    strcpy(w1.txt , text);
    
    printf("%s" , w1.txt);
 	
}
void split()
{
	
}




int main ()
{
	remove_anamolys();
	/*int choice = 0 ;
	do{	
		printf("choose a number from the following : \n");
		printf("choice 1 : Enter Text to Analyse\n");
		printf("choice 2 : Show The Analysation\n");
		printf("choice 3 :\n");
		printf("choice 4 :\n");
		printf("choice 5 :\n");
		printf("choice 0 :\n");
		scanf("%d" , &choice);
		switch(choice)
		{
			case 1:
				
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			case 5 :
				
				break;
			case 0 :
				printf("bye");
				break;	
				
			default	: printf("invalid input try again.\n\n");		
		}
    	remove_anamolys();
	}while(choice != 0);*/
	return 0;
	
}

