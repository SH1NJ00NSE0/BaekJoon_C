#include <stdio.h>

int main()
{
	int k, n, m, bridge;
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		bridge = 1;
		scanf("%d %d", &n, &m);
		for (int j = 0; j < n; j++)
		{
			bridge *= m - j;
			bridge /= j + 1;
		}
		printf("%d\n", bridge);
	}
	return 0;
}