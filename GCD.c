/*
	Name: GCD.C
	
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
	Date: 02.03.26 08:25
	Description: Finding the GCD
*/

#include <stdio.h>
#include <conio.h>

int compute(int, int);

int main() {
	int a = 0, b = 0, gcd = 0;
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	// if pa < pw then swap values
	if (a <= b) {
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	};
	gcd = compute(a, b); 	
	printf("GCD(%d, %d)=%d\n", a, b, gcd);
	getch();
	return 0;
}

int compute(int pa, int pb) {
	if (pb  == 0) return pa;
	else compute(pb, pa % pb);
};