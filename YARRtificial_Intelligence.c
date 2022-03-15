
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	int color_count, chip_count, grid_size, win_length, id;
	float timeout;
	scanf(" init %d %d %d %d %f %d", &color_count, &chip_count, &grid_size, &win_length, &timeout, &id);
	printf("color 0\n");

	int turn_count = 0;
	int gravity = 0;
	int cell_count = -1;

	int q;
	int r;
	int s;
	int value;
	while(1)
	{
		printf("fetch cells\n");
		// scanf(" cell_count %d", &cell_count);
		// for (int i = 0; i < cell_count; i++)
		// {
		// 	scanf(" cell %d %d %d %d", &q, &r, &s, &value);
		// }
		printf("rotate %d\n", gravity);
		gravity++;
		gravity = gravity % 6;
	}
	return (0);
}