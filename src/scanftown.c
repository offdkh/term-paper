#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *departure, *arrival;
    departure = malloc(sizeof(char) * 15);
    arrival = malloc(sizeof(char) * 15);
    departure = scanf_town_departure(departure);
    arrival = scanf_town_arrival(arrival);
    printf("Отправление: %s\n", departure);
    printf("Прибытие: %s\n", arrival);
    return 0;
}

char* scanf_town_departure(char* departure)
{
    printf("Откуда отправляетесь? Введите название города: ");
    scanf("%s", departure);
    return departure;
}

char* scanf_town_arrival(char* arrival)
{
    printf("Куда отправляетесь? Введите название города: ");
    scanf("%s", arrival);
    return arrival;
}