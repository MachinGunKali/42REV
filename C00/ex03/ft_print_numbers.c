#include <stdio.h>
#include <unistd.h>



void ft_print_numbers(void)
{
  char nb;
  nb = '0';

  while(nb <= '9')
  {
    write(1, &nb, 1);
    nb++;
  }
  write(1, "\n", 1);
}


int main(void)
{
  ft_print_numbers();
}