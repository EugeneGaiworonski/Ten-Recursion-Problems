/*
	Name: FACT.C
	
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
	Date: 03.03.26 09:01
	Description: Calculates the factorial of a number using recursion and displays the result 
*/

#include <stdio.h>
#include <conio.h>

long long fact(long long n) {
	if (n == 0) return 1;
	else return (n * fact(n - 1));
}	
    
int main() {
	long long n = 0;
	printf("n="); scanf("%lld", &n);
	printf("%lld! = %lld", n, fact(n));
	getch();
	return 0;
}

