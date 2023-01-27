#include "lists.h"

typedef struct list {
    char *str;
    struct list *next;
} list_t;

size_t print_list(const list_t *h);

size_t print_list(const list_t *h) {
    size_t count = 0;
    while (h != NULL) {
        if (h->str == NULL) {
            printf("[%lu] (nil)\n", count);
        } else {
            printf("[%lu] %s\n", count, h->str);
        }
        h = h->next;
        count++;
    }
    return count;
}

