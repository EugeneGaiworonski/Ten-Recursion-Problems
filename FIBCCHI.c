/*
	Name: FIBCCHI.C
	
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
	Date: 03.03.26 12:14
	Description: Calculates and displays the nth Fibonacci number using a recursive approach
*/

#include <stdio.h>

long long fib(long long n) {
	if (n <= 1) return n;
	else return fib(n - 1) + fib(n - 2);
}	
    
int main() {
	long long n = 0;
	printf("n="); scanf("%lld", &n);
	if (n < 0) n = -n;
	printf("F%lld = %lld", n, fib(n));
	getchar();
	return 0;
}

