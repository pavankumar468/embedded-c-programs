#include<stdio.h>
#include<time.h>

void fun()
{
    printf("fun() starts \n");
    printf("Press enter to stop fun \n");
    while(1)
    {
        if (getchar())
            break;
    }
    printf("fun() ends \n");
}

int main(){
clock_t start, end, diff;
start = clock();
fun();
end= clock();
 double timetaken = ((double)(end - start))	/ CLOCKS_PER_SEC;
 
   printf("fun() took %f seconds to execute \n", timetaken);
}
