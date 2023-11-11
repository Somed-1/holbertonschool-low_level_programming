#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_WORD_LENGTH 100

int is_space(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}

int count_words(char *str) {
	int count = 0;
	int in_word = 0;

	while (*str) {
		if (is_space(*str)) {
			in_word = 0;
		} else if (!in_word) {
			in_word = 1;
			count++;
		}
		str++;
	}

	return count;
}

char **strtow(char *str) {
	if (str == NULL || *str == '\0') {
		return NULL;
	}

	int num_words = count_words(str);
	if (num_words == 0) {
		return NULL;
	}

	char **result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (result == NULL) {
		return NULL;
	}

	int word_count = 0;
	int in_word = 0;
	char *start = str;

	while (*str) {
		if (is_space(*str)) {
			if (in_word) {
				int word_length = str - start;
				result[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
				if (result[word_count] == NULL) {
					// Allocation failed, free previously allocated memory
					for (int i = 0; i < word_count; i++) {
						free(result[i]);
					}
					free(result);
					return NULL;
				}

				strncpy(result[word_count], start, word_length);
				result[word_count][word_length] = '\0';
				word_count++;
				in_word = 0;
			}
		} else if (!in_word) {
			start = str;
			in_word = 1;
		}
		str++;
	}

	if (in_word) {
		int word_length = str - start;
		result[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
		if (result[word_count] == NULL) {
			// Allocation failed, free previously allocated memory
			for (int i = 0; i < word_count; i++) {
				free(result[i]);
			}
			free(result);
			return NULL;
		}

		strncpy(result[word_count], start, word_length);
		result[word_count][word_length] = '\0';
		word_count++;
	}

	result[word_count] = NULL; // Set the last element to NULL

	return result;
}
