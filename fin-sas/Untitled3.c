#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct word_info{
  char txt[2000];
  char words[50];
  int occurence;
  int len;
  int count;
  int len2;
};

struct word_info w1[100];//give the structures a way to be declared


void remove_anamolys()
{
	char text[2000];
	
	int i;
	
	int j = 0;
	
    
    
    fgets(text , sizeof(text) , stdin);
    
    text[strcspn( text , "\n")]='\0';
    
    strlwr(text);//lower text
    
    w1[100].len = strlen(text);//register lenght for later
    
    for(i = 0 ; i < w1[100].len ; i++)
    {
    	if(!ispunct(text[i]))//remove punct
    	{
    		text[j++] = text[i];
		}
	}
	text[j] = '\0';//removes the puncts at the end
	
    w1[100].len = strlen(text);//register lenght for later
    
    strcpy(w1[100].txt , text);
    
    
 	
}
void split()
{

	int i ;
   w1[100].count = 0;
   int n = 0;
   char word[2000];
	strcpy(word , w1[100].txt);
	
    char *wword = strtok(word, " ");
    
     while (wword != NULL)
     {
      int found=0;
        for( i = 0 ; i < n ; i++)
        {
          if(strcmp(wword , w1[i].words)== 0){
          w1[i].count++;
          found=1;
          break;
        }
      }
       if(!found){
         strcpy(w1[n].words,wword);
         w1[n].count=1;
         n++;
         }
       wword=strtok(NULL," ");
      }
     for (i = 0; i < n; i++) {
        int len = strlen(w1[i].words);
       printf("%s: lenght is %d occurence  %d\n", w1[i].words, len , w1[i].count);

   }	
}




int main ()
{
	remove_anamolys();
	split();
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

