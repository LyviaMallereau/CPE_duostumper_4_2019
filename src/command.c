/*
** EPITECH PROJECT, 2020
** duostumper 4
** File description:
** command function
*/

#include "./include/my.h"

int command(void)
{
    char *command;

    strcpy(command, "AND");
    printf("AND\n");
    return (command);
    
    strcpy(command, "OR");
    printf("OR\n");
    return (command);
    
    strcpy(command, "WHERE");
    printf("WHERE\n");
    return (command);
}
