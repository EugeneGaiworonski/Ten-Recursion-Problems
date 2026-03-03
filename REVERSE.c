/*
	Name: REVERSE.C
	
	Copyright: (C) 2026 E. Gaiworonski
	This program is free software: you can redistribute it and/or modify
 	it under the terms of the GNU General Public License as published 
	by the Free Software Foundation, either version 3 of the License, 
	or (at your option) any later version.
 
  	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty 
	of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
	See the GNU General Public License for more details.
  	You should have received a copy of the GNU General Public License
 	along with this program.  If not, see <https://www.gnu.org/licenses/>.
 
	Author: E. Gaiworonski
	Date: 03.03.26 15:32
	Description: Reads a string from the user and prints it in reverse order using recursion
*/

#include <stdio.h>

void rput(char* st, int idx) {
	if (st[idx] == '\0') return;
	else {
	rput( st, idx + 1);
	printf("%c", st[idx]);
	}
}	
    
int main() {
	char st[1000] ;
	printf(">"); scanf("%999s", st);
	rput(st, 0);
	printf("\n");	
	getchar();
	getchar();
	return 0;
}

