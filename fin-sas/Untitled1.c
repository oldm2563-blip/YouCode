#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct word_info{
  char text [2000];
  char words[50];
  int occurence;
  int len;
  int len2;
};
void remove_anamolys()
{
	int j = 0;
    struct word_info w1;
    fgets(w1.text , sizeof(w1.text) , stdin);
    w1.text[strcspn( w1.text , "\n")]='\0';
    strlwr(w1.text);
    w1.len = strlen(w1.text);
    for(int i = 0 ; i < len ; i++)
    {
    	if(!ispunct(w1[i].text))
    	{
    		w1[i].text = w1[j].text;
    		j++;
		}
	}
    w1.len = strlen(w1.text);
    printf("%s" , w1.text);
 	
}





int main ()
{
	remove_anamolys();
	/*int choice = 0 ;
	do{	
		printf("choose a number from the following : \n");
		printf("choice 1 :\n");
		printf("choice 2 :\n");
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

