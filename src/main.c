/*                                                    
** EPITECH PROJECT, 2019                              
** CPE_duostumper_4_2019                              
** File description:                                  
** my.h                                               
*/

#include "../include/my.h"

char *get_str(char *str, int *i, char *res)
{
    int a = 0;

    for (a = *i; str[a] && str[a] != '\n' && str[a] != ';'; a += 1);
    res = malloc(sizeof(char) * (a + 1));
    res[a] = '\0';
    for (int b = 0; str[*i] && str[*i] != '\n' && str[*i] != ';'; *i += 1)
        res[b++] = str[*i];
    printf("res = %s, i = %d\n", res, *i);
    return (res);
}

node_t *stock_str(char *str, node_t *head, int *i)
{
    node_t *ln = malloc(sizeof(*ln));
    node_t *tmp = head;

    ln->info.id = get_str(str, i, ln->info.id);
    *i += 1;
    ln->info.title = get_str(str, i, ln->info.title);
    *i += 1;
    ln->info.synopsis = get_str(str, i, ln->info.synopsis);
    *i += 1;
    ln->info.id_director = get_str(str, i, ln->info.id_director);
    *i += 1;
    ln->info.director = get_str(str, i, ln->info.director);
    *i += 1;
    ln->info.id_type = get_str(str, i, ln->info.id_type);
    *i += 1;
    ln->info.type = get_str(str, i, ln->info.type);
    *i += 1;
    ln->next = NULL;
    if (!tmp)
        return (ln);
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = ln;
    printf("hello\n");
    return (head);
}

int errors(int ac, char **av, node_t *head)
{
    int fd = 0;
    int a = 0;
    char *str = NULL;
    struct stat sb;

    if (ac != 3)
        return (84);
    fd = open(av[1], O_RDONLY);
    if (fd < 0)
        return (84);
    if (lstat(av[1], &sb) == -1)
        return (84);
    str = malloc(sizeof(char) * (sb.st_size + 1));
    str[sb.st_size] = '\0';
    a = read(fd, str, sb.st_size);
    if (a < 0)
        return (84);
    for (int i = 0; str[i]; i += 1)
        head = stock_str(str, head, &i);
    return (0);
}

int main(int ac, char **av)
{
    node_t *head = NULL;
    if(errors(ac, av, head) == 84)
        return (84);
    return (0);
}
