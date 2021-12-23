#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	char *s;
	s = (char*)malloc(1024 * sizeof(char));
	scanf("%[^\n]", s);
	int len = strlen(s);
	s = (char*)realloc(s,len + 1);


	char *w;
	w = (char*)malloc((len+1) * sizeof(char));

	int i, j;

	for (i = 0, j = 0; i < len; i++) {
		if (s[i] == ' ') {
			if (j > 0) {
				w[j] = '\0';
				printf("%s\n", w);
				j = 0;
			}
		}
		else {
			w[j] = s[i];
			j++;
		}
	}

	/*last word*/
	if (j > 0) {
		w[j] = '\0';
		printf("%s\n", w);
	}

	free(s);
	free(w);

	return 0;
}