#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100000
/*This is the maximum size of teh test data.*/
#define HALF 50000 


char solution(char *num)
{
    int char_count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    char *final = (char*)malloc(sizeof(char) * MAX);
    char *half = (char*)malloc(sizeof(char) * HALF);

    int i,index, pos=0;

    // Counting the frequency of each digit
    for (i=0; i < strlen(num); i++)
    {
        char_count[num[i]-48] ++;
        /*
        index = (int) (num[i]);
        printf("%d \t", index);
        char_count[index]++;
        */
    }

    // Now, we have to pick the largest number in the string
    pos=9;
    while(pos>-1)
    {
        // char ch = (char) pos;
        while(char_count[pos]>1)
        {
            strcat(final, ch);
        }
        pos--;
    }
    
    printf("\n");
    printf("Frequency of characters : \n");
    for(i=0;i<10;i++)
    {
        printf("%d \t", char_count[i]);
    }

}

int main()
{
    char num[MAX];
    scanf("%[^\n]%*c", num);
    // printf("%s",solution(num));
    solution(num);
    return 0;
}
