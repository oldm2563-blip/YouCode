#include <stdio.h>
#include <string.h>


struct wordle
{
  char word2[50];
  int count;
};

void count()
{
	int i ;
   struct wordle w1[100];
   int n = 0;
    char word[100] = "The black cat sleeps, the dog plays, the black cat";
    strlwr(word);
    char *wword = strtok(word, " ");
     while (wword != '\0')
     {
      int found=0;
        for( i = 0 ; i < n ; i++)
        {
          if(strcmp(wword , w1[i].word2)== 0){
          w1[i].count++;
          found=1;
          break;
        }
      }
       if(!found){
         strcpy(w1[n].word2,wword);
         w1[n].count=1;
         n++;
         }
       wword=strtok(NULL," ");
      }
     for (i = 0; i < n; i++) {
        int len = strlen(w1[i].word2);
       printf("%s: lenght is %d occurence  %d\n", w1[i].word2, len , w1[i].count);

   }
}
int main()
{
    count();
    return 0;
}
