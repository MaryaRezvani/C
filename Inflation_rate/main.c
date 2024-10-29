#include <stdio.h>
#include <math.h>
int main()
{
	int m = 0;
	int n = 0;

	scanf("%d", &m);
	scanf("%d", &n);

	int t = 100 * (m- n);

	if ((t % n) == 0) {
		t = (int)(t / n);
		printf("%d%%\n%d", t, (m* t) / 100 + m);


	}
	else {
		float t1 = (float)t / (float)n;
		printf("%.2f%%", t1);

		t1 = floor(100 * t1);

		printf("\n%d", (int)((m* (int)t1) / 10000) + m);

	}

	return 0;
}
