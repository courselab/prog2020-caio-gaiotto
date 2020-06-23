/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  int i=0;int count=0;
  while (s[i] != 0)
  {
    i++;
  }
  while(i>=0)
  {
    if(s[i]>='A' && s[i]<='Z')
    {
      break;
    }
    i--;count++;
  }
  while (s[i] != 0)
  {
    i++;
  }
  for(i=i;i>=0;i--)
  {
    s[(i+count+1)]=s[i];
  }
  s[count]=' ';s[count-1]=',';s[count+1]=s[0];
  while (s[i] != 0)
  {
    i++;
  }
  int n=count;int m=i;
  for(i=m;i<=m-count;i--)
  {
    s[n]=s[i];
    n--;
  }
}


/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
