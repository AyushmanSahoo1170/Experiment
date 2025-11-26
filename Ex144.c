/*
The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. 
Write a program to determine the population at the end of each year in the last decade.
*/

#include <stdio.h>
int main()
{
    int year, population, increase;
    population = 100000;
    for (year = 1; year <= 10; year++)
    {
        increase = population * 10 / 100;
        population = population + increase;
        printf("Population at the end of year %d: %d\n", year, population);
    }
    return 0;
}