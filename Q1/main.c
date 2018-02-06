#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning (disable:4996)

void main()
{
	int m, n; //size of Theatre Square
	int a; //size of flagstone
	int x; //number of flagstone
	
	while (1) {
		scanf("%d %d %d", &n, &m, &a);

		if (m > 0 || n > 0 || a > 0)
			break;
	}

	x = (n%a) > 0 ? (n / a) + 1 : n / a; //calculate for horizontal line
	x += (m - a) % a > 0 ? (m / a)*x : (m / a - 1)*x; //calculate for vertical line


	printf("%d\n\n", x);

	system("pause");
}
