#include <unistd.h>
#include <stdio.h>
#include <string.h>


// Stringa che converte un numero in una stringa
char *my_itoa(char *src, int nb, int n)
{
  int i;

  i = 0;
  while (nb > 0)
  {
    src[n - i - 1] = nb % 10 + '0';
    nb = nb / 10;
    i++;
  }
  while (i < n + 1)
  {
    src[n - i - 1] = '0';
    i++;
  }
  return (src);
}

// Verifica che nella stringa numerica data tutte le cifre siano strettamente inferiori alle successive
int valida(char *str)
{
  int i;

  i = 0;
  while (str[i + 1] != '\0')
  {
    if (str[i] >= str[i + 1])
    {
      //printf("%c > %c  [%s]\n", str[i] , str[i + 1], str);
      return (0);
    }
    i++;
  }
  return (1);
}

int my_pow(int i, int arg)
{
  if (arg == 0)
  {
    return 1;
  }
  return i * my_pow(i,arg-1);
}

// Calcola quale sarà l'ultima combinazione 
int max(int n)
{
	int i;
	int sum;
	
	sum = 0;
	i = 9;
	while (i > 9 - n)
	{
		sum += i*my_pow(10, 10 - i - 1);	
		i--;
	}
	return sum;
}

void ft_combn(int n)
{
  int i;
  int mx;
  char nb_str[n+1];

  mx = max(n);
  nb_str[n] = '\0';
  i = 0;
  while (i < my_pow(10,n))
  {
    my_itoa(nb_str, i, n);
    if (valida(nb_str))
    {
      write (1, nb_str, n);
// Se questa è la combinazione dal valore massimo allora non stampar la , e lo spazio
      if (i != mx)
      {
        write (1, ", ", 2);
      }
    }
// Se ho superato la combinazione dal valore massimo è inutile proseguire
    if (i > mx)
    {
	break;
    }
    i++;
  }
}


int main(void)
{
  int i;
  scanf("%d",&i);
  ft_combn(i);
}
