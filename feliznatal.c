#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (){

	system("clear");

	char mat[33][120];

	int i, j;

	FILE* christmas;

	christmas = fopen("feliznatal.txt", "r");

	printf("\n\n");




	printf("                                       +                                \n");
	printf("    .       .          .               #       .       .       .        \n");
	printf("                                      ###   .                           \n");
	printf(".        .                    #:.  .:##.##:.  .:#                 .     \n");
	printf("                 .             .#####.###.#####.        .    .          \n");
	printf("            .             .#:.    .:#.###.#:.    .:#.                   \n");
	printf("                         .   .#########.#########.                      \n");
	printf("   .    .                  	.#:.  .#####.###.####.   .:#.           .   \n");
	printf("                .          .#######..##.##.#########.           .    .  \n");
	printf("                    .       	..##.#####.####.##.   .                   \n");
	printf("                      .#:.  ...  .:##.###.###.##:.  ...  .:#.           \n");
	printf("    .                     .#######.##.#####.##.#######.                 \n");
	printf("                              .#####.######.#####.    .          .    .  \n");
	printf("           .     .                    000              	                \n");
	printf("       .                              000       .           .           \n");
	printf("   .         .     .                  000             .          .      \n");
	printf("    .                                 000    .                        . \n");
	printf(".  .  .  .  .  .  .  .  .  .  .  .    000   .  .  .  .  .  .  .  .  .  . \n");
	printf("\n\n\n");



	sleep(3);

    printf("\n\n");
	while(!feof(christmas)){
	  	for(i = 0; i < 33; i++){
			for(j = 0; j < 120;j++){

			fscanf(christmas, "%c", &mat[i][j]);
			}
		}
	}

	for(i = 0; i < 33; i++){
		for(j = 0; j < 120;j++){

			printf("%c", mat[i][j]);
		}
	}

	printf("\n\n\n");
	fclose(christmas);
	
	return 0;
}