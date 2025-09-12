#include <stdio.h>
int main()
{
    int n = 0;
    int nums[] = {11 , 11 , 11 , 22 , 21 , 31 , 22 , 17 , 21};
    int noms[n];
    int exist = 0;
    for(int i = 0 ; i < 8 ; i++)
    {
        exist = 0;

        for(int k = 0 ; k < n ; k++)
        {
            
                if(nums[i] == nums[k])
                {
                    exist++;
                    break;

                }
            
        }
        if(!exist)
        {
            noms[n] = nums[i];
             n++;
        }

    } 
    for (int i = 0; i < n; i++)
    {
       printf("%d\n" , noms[i]);
    }
    
    
}