/* Implementing hastable in Linear Search
 * This is not a bad strategy if you’ve only got a few items
 */

#pragma once

enum { _CMP_LESS = -1, _CMP_EQUAL = 0, _CMP_GREATER = 1 };

/* Integer comparison */
static inline int map_cmp_int(const void *arg0, const void *arg1) {
    int *a = (int *)arg0, *b = (int *)arg1;
    return (*a < *b) ? _CMP_LESS : (*a > *b) ? _CMP_GREATER : _CMP_EQUAL;
}

/* Unsigned integer comparison */
static inline int map_cmp_uint(const void *arg0, const void *arg1) {
    unsigned int *a = (unsigned int *)arg0, *b = (unsigned int *)arg1;
    return (*a < *b) ? _CMP_LESS : (*a > *b) ? _CMP_GREATER : _CMP_EQUAL;
}

/* Stores the key, data, values of each elements */

typedef struct data {
    int key;
    int value;
} data_t;

typedef struct hashtable {
    int size;
    int mod;
    data_t *data;
} hashtable_t;
