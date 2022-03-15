
#include <stdio.h>

int main(void)
{
	int color_count, chip_count, grid_size, win_length, id;
	float timeout;
	scanf(" init %d %d %d %d %f %d", &color_count, &chip_count, &grid_size, &win_length, &timeout, &id);

	printf("color 0\n");
	int gravity = 0;
	while(1)
	{
		printf("rotate %d\n", gravity);
		gravity++;
		gravity = gravity % 6;
	}
	return (0);
}