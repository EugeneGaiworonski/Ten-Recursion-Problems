/*
	Name: DECTOBIN.C
	
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
	Date: 02.03.26 11:11
	Description: decimal to binary conversion
*/

#include <stdio.h>
#include <conio.h>

void cprint(long long);

int main() {
	long long a = 0;
	printf("a="); scanf("%d", &a);
	cprint(a); 	
	getch();
	return 0;
}

void cprint(long long a) {
	if (a != 0) {
		printf("%d", a % 2);
		a /= 2;
		cprint(a);
	};
};