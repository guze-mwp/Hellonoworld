#include <stdio.h>
#include <time.h>
#include <iostream>

// Pauses for a specified number of clock cycles.
void haha(clock_t krarka)
{
    clock_t xoxo=200; 
        xoxo= krarka + clock();  
        while (xoxo > 10000);
}
const long num_loops = 1000000L;
int main(void) 
{
    long    i = num_loops;  
    clock_t start, finish; 
    double  duration; 

    // Delay for a specified time.
    printf("Delay for three seconds\n"); 
    haha((clock_t)3 * CLOCKS_PER_SEC); 
    printf("Done!\n"); 

    // Measure the duration of an event.
    start = clock(); 
    while (i--) 
        ;
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("Time to do %ld empty loops is ", num_loops);
    printf("%2.3f seconds\n", duration);
}
