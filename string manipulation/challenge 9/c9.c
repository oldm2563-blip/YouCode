#include <stdio.h>
#include <string.h>
void spaces(char word[]){
    int n = 0;

for(int i = 0 ; i < strlen(word) ; i++){
    if(word[i] != ' '){

     word[n] = word[i];
     
     n++;
    }
}
}
int main(){
    char word[100];
    fgets(word , sizeof(word) , stdin);
    spaces(word);
    printf("%s" , word);
}