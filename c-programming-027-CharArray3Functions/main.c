#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(const char string[]);
void concat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int main() {
	const char word1[] = "tomek";
	const char word2[] = "ok";
	const char word3[] = "whatever";
	char result[50];

	printf("\nstringLength: word1: %d   word2: %d   word3: %d", stringLength(word1), stringLength(word2), stringLength(word3));

	concat(result, word1, word2);
	printf("\nconcat: %s", result);

	printf("\nequalStrings: %d", equalStrings("Tomek", "Tomek"));
	printf("\nequalStrings: %d\n", equalStrings("Tomek", "TomeK"));

	return 0;
}

int stringLength(const char string[]) {
	int count = 0;
	while (string[count] != '\0') {
		++count;
	}
	return count;
}

void concat(char result[], const char str1[], const char str2[]) {
	int i, j;

	for (i = 0; str1[i] != '\0'; ++i) {
		result[i] = str1[i];
	}
	for (j = 0; str2[j] != '\0'; ++j) {
		result[i + j] = str2[j];
	}
	result[i + j] = '\0';
}

bool equalStrings(const char s1[], const char s2[]) {
	int i = 0;
	bool isEqual = false;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
		++i;
	}
	
	if (s1[i] == '\0' && s2[i] == '\0') {
		isEqual = true;
	}
	else {
		isEqual = false;
	}

	return isEqual;
}