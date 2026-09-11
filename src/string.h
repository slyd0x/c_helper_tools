#include <stdlib.h>

typedef struct {
  char* data;
  size_t length;
} string;

string* string_new(char* str);
void string_free(string* str);
string* string_cat(string* a, string* b);
size_t string_first_index_of(string* str, char c);

