/*
	Name: LST2STR.C
	
	Copyright: (C) 2026 E. Gaiworonski
	This program is free software: you can redistribute it and/or modify
 	it under the terms of the GNU General Public License as published 
	by the Free Software Foundation, either version 3 of the License, 
	or (at your option) any later version.
 
  	This program is distributed in the hope that it will be useful* 
	but WITHOUT ANY WARRANTY; without even the implied warranty 
	of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
	See the GNU General Public License for more details.
  	You should have received a copy of the GNU General Public License
 	along with this program.  If not, see <https://www.gnu.org/licenses/>.
 
	Author: E. Gaiworonski
	Date: 09.03.26 08:40
	Description: Converts an array of integers (input by user) 
	into a space-separated string format
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct array {
		int* val;
		int size;
	} Int;
	
	Int a = {NULL, 0} ;
	int buffer = {0};
	char s[] ={0};
	char buf[12] = {0};
	
void lst2str(char* result, int i);

int main(void) {
		
	a.val = (int*) malloc(a.size * sizeof(int));
	
	do {
		printf("*");
		scanf ("%d", &buffer);
		if (buffer == 0) continue;
		a.val = (int*) realloc(a.val, (++a.size) * sizeof(int));
		a.val[a.size - 1] = buffer;
  } while (buffer != 0);
  
	lst2str(s, 0);
	
	printf("\n[%s]", s);
	free(a.val);
	a.val = NULL;
	return 0;
}

void lst2str(char* result, int i) {
	char buf[12] = {0};
	if (i == a.size) return;
	else {
		sprintf(buf, "%d", a.val[i]);
		if (i > 0) strcat(result, " ");
		strcat(result, buf);
		i++;
		lst2str(result, i);
	};
};