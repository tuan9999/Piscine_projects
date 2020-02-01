echo "#include <unistd.h>\n\nvoid\tft_putchar(char c)\n{\n\twrite(1, &c, 1);\n}" >> temp_test_putchar.c
gcc -Wall -Wextra -Werror -o testfile main_ft_atoi.c temp_test_putchar.c  && ./testfile
rm temp_test_putchar.c