#include "string.h"

#include <string.h>

string* string_new(char* str) {
  string* new_string = malloc(sizeof(string));
  new_string->length = strlen(str);
  new_string->data = malloc(new_string->length);
  memcpy(new_string->data, str, new_string->length);
  return new_string;
}

void string_free(string* str) {
  free(str->data);
  free(str);
}

string* string_cat(string* a, string* b) {
  size_t new_length = a->length + b->length;
  string* new_string = malloc(new_length);
  new_string->length = new_length;
  new_string->data = malloc(new_length);
  memcpy(new_string->data, a->data, a->length);
  memcpy(new_string + a->length, b->data, b->length);
  return new_string;
}

size_t string_first_index_of(string* str, char c) {
  size_t index = -1;
  for(size_t i = 0; i < str->length; i++) {
    if (str->data[i] == c) {
      index = i;
      break;
    }
  }
  return index;
}