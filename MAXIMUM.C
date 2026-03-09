/*
	Name: MAXIMUM.C
	
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
	Date: 09.03.26 11:47
	Description: Finds the maximum element in a list of integers using recursion 
*/

//Поиск максимального элемента в списке
//Найдите максимальный элемент в списке рекурсивно.
//Пример:Вход: [3,1,4,1,5,9,2]
//[3,1,4,1,5,9,2]Выход: 9
//9

#include <stdio.h>
#include <stdlib.h>

typedef struct array {
		int* val;
		int size;
	} Int;
	
	//Int a;
	//int buffer = {0};
int maximum(int* arr, int size);
	
int main(void) {
	Int a = {NULL, 0};
	int buffer = 0;
	
	a.val = (int*) malloc(a.size * sizeof(int));
	
	do {
		printf("*");
		scanf ("%d", &buffer);
		if (buffer == 0) continue;
		a.val = (int*) realloc(a.val, (++a.size) * sizeof(int));
		a.val[a.size - 1] = buffer;
  } while (buffer != 0);
  
	int maxVal = maximum(a.val, a.size);
	printf("\n[%d]\n", maxVal);

	free(a.val);
	a.val = NULL;
	return 0;
}

int maximum(int* arr, int size) {
    if (size <= 1) return arr[0];
    int max = maximum(arr + 1, size - 1);
    return (arr[0] > max) ? arr[0] : max;
}



