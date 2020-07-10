#include <stdio.h>
int main()
{
  int dizi[100], n, c, d, degis;
 
  printf("kac sayi olacagini giriniz: \n");
  scanf("%d", &n);
 
  printf("%d tamsayi giriniz: \n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &dizi[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (dizi[d] > dizi[d+1]) /* azaltýlmasý için */
      {
        degis       = dizi[d];
        dizi[d]   = dizi[d+1];
        dizi[d+1] = degis;
      }
    }
  }
 
  printf("listenin artan sirada siralanmis hali:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", dizi[c]);
 
  return 0;
}
