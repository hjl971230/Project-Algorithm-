#include "header.h"

int main()
{
	int r1 = 0, r2 = 0, r3 = 0;
	int ram[1000] = { 0 };
	int res[10] = { 0 };
	while (1)
	{
		cin >> r1 >> r2 >> r3;
		if (r3 < 0 && r3 > 9)
		{
			continue;
		}
		else
			break;
	}
	
	switch (r1)
	{
	case 1:
		if (r2 == 0 && r3 == 0)
		{
			exit(0);
		}
		break;
	case 2:
		res[r2] = r3;
		break;
	case 3:
		res[r2] += r3;
		break;
	case 4:
		res[r2] *= r3;
		break;
	case 5:
		res[r2] = res[r3];
		break;
	case 6:
		res[r2] += res[r3];
		break;
	case 7:
		res[r2] *= res[r3];
		break;

	default:
		break;
	}
}