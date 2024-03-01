#include <stdio.h>
#include <stdlib.h>

int NumofHandShakes(int);
int main()
{
    int NumofPeople=0;
    int Result=0;
    while(1)
    {
Again:
        printf("Enter Number of People , -1 to Exit : ");
        scanf("%d",&NumofPeople);
        if(NumofPeople==-1)
            break;
        else if(NumofPeople<0)
        {
            printf("Incorrect Input!\n");
            goto Again;
        }
        else
            //do nothing
            Result=NumofHandShakes(NumofPeople);
        printf("Number Of Handshakes is : %d\n",Result);
        printf("-----------------------------------------\n");
    }
    return 0;
}

//Function to calculate number of handshaks
int NumofHandShakes(int NumofPeople)
{
    int Result=0;
    Result=((NumofPeople*(NumofPeople-1))/2);
    return Result;  // return number of shakes
}
