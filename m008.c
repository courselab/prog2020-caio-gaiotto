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
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */
void swap(char *x, char *y)
  {
   char *k = x; 
    x = y; 
    y = k;
  } 
void lastname (char *s)
{
  int i=0,count=0,n=0;char t[MAX]; 
  strcpy(t, s);
  while (s[i] != 0)
  {
    i++;n=i;
  }
  while(i>=0)
  {
    if(s[i]==32)
    {
      count--;
      break;;
    }
    i--;count++;
  }
  int k=count;
  for(i=n-1;i>=count;i--)
  {
    t[i]=t[i-count];
  }
  i=0;
  while(k>=0)
  {
    if(s[n-k]>='a' && s[n-k]<='z')
    {
      t[i]=s[n-k]-32;
    }
    if(s[n-k]>='A' && s[n-k]<='Z')
    {
      t[i]=s[n-k];
    }
    k--;i++;
  }
strcpy(s, t);
t[0]=' ';t[1]=',';
for(n=n;n>=count;n--)
{
  s[n]=s[n-1];
}
s[count-1]=t[1];s[count]=t[0];
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
