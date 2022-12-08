#include "ft_strs_to_tab.c"
#include "../ex05/ft_show_tab.c"
#include <stdio.h>

int main(int argc, char **argv)
{
	struct s_stock_str *s;

	s = ft_strs_to_tab(argc, argv);
	ft_show_tab(s);
}
