#include <unistd.h>

void putnbr(int n)
{
  int n_perm;
  char n_str[1];

  n_perm = n;
  if (n < 100)
  {
    write(1, "0", 1);
  }
  else
  {
    n_str[0] = '0' + n/100;
    n = n - (n_str[0] - '0') * 100;
    write(1, n_str, 1);
  }
  n_str[0] = '0' + n/10;
  write(1, n_str, 1);
  n_str[0] = '0' + n%10;
  write(1, n_str, 1);
  if (n_perm != 789)
  {
    write(1, ", ", 2);
  }
}

void ft_print_comb(void)
{
  int i;

  i = 0;
  while (i < 999)
  {
    if (i>11 && i<100 && i/10 < i%10)
    {
      putnbr(i);
    }
    else if (i > 100 && i/100 < (i-(i/100)*100) / 10 && (i-(i/100)*100) / 10 < i%10)
    {
      putnbr(i);
    }
    i++;
  }
}


int main(void)
{
  ft_comb();
}
