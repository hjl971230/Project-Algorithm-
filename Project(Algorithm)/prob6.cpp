#include "header.h"

int main()
{
	int r1 = 0, r2 = 0, r3 = 0;
	int ram[1000] = { 0 };
	int res[10] = { 0 };
	int com = 0;
	while (1)
	{
		while (1)
		{
			cin >> r1 >> r2 >> r3;
			if (r3 < 0 || r3 > 9)
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
				cout << com + 1 << endl;
				exit(0);
			}
			break;
		case 2:
			res[r2] = r3;
			cout << res[r2] << endl;
			break;
		case 3:
			res[r2] += r3;
			cout << res[r2] << endl;
			break;
		case 4:
			res[r2] *= r3;
			cout << res[r2] << endl;
			break;
		case 5:
			res[r2] = res[r3];
			cout << res[r2] << endl;
			break;
		case 6:
			res[r2] += res[r3];
			cout << res[r2] << endl;
			break;
		case 7:
			res[r2] *= res[r3];
			cout << res[r2] << endl;
			break;
		case 8:
			res[r2] = ram[res[r3]];
			cout << res[r2] << endl;
			break;
		case 9:
			ram[res[r3]] = res[r2];
			cout << ram[res[r3]] << endl;
			break;
		case 0:
			if (res[r3] != 0)
			{
				ram[res[r2]];
			}
			break;
		default:
			break;
		}
		com++;
	}
}