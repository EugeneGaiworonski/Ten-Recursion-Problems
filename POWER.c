/*
	Name: POWER.C
	
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
	Date: 03.03.26 08:07
	Description: Calculates the result using a recursive power function
*/

#include <stdio.h>
#include <conio.h>

long long power(long long x, int n) {
	if (n == 0) return 1;
	else if (n < 0) return 0;
	else return (x * power(x, n - 1));
}	
    
int main() {
	long long a = 0;
	int n = 0;
	printf("val="); scanf("%lld", &a);
	printf("power="); scanf("%d", &n);
	printf("power(%lld, %d) = %lld", a, n, power(a, n));
	getch();
	return 0;
}

