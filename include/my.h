/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** my.h
*/


#ifndef DATABASE
#define DATABASE

#include <stdarg.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

typedef struct information_s {
    char *id;
    char *title;
    char *synopsis;
    char *id_director;
    char *director;
    char *id_type;
    char *type;
} information_t;

typedef struct node_s {
    information_t info;
    struct node_s *next;
} node_t;

#endif
