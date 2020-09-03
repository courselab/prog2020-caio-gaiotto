/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
  int g;g= day;
  int b;b=g%7;
  switch(month)
  {
  case 1:
  case 4:
  case 7:
    switch(b){
    case 0: g=2;break;
    case 1: g=3;break;
    case 2: g=4;break;
    case 3: g=5;break;
    case 4: g=6;break;
    case 5: g=0;break;
    case 6: g=1;break;
    break;}}
  switch(month)
  {
  case 2:
  case 8:
  switch(b)
    {case 0: g=5;break;
    case 1: g=6;break;
    case 2: g=0;break;
    case 3: g=1;break;
    case 4: g=2;break;
    case 5: g=3;break;
    case 6: g=4;break;
    break;}}
 switch(month){
  case 3 :
  case 11:
  switch(b){
    case 0: g=6;break;
    case 1: g=0;break;
    case 2: g=1;break;
    case 3: g=2;break;
    case 4: g=3;break;
    case 5: g=4;break;
    case 6: g=5; break; 
  break;}}
 switch(month){
  case 5:
  switch(b){
    case 0: g=4;break;
    case 1: g=5;break;
    case 2: g=6;break;
    case 3: g=0;break;
    case 4: g=1;break;
    case 5: g=2;break;
    case 6: g=3;break;
  break;}}
   switch(month){
  case 6:
  switch(b){
    case 0: g=0;break;
    case 1: g=1;break;
    case 2: g=2;break;
    case 3: g=3;break;
    case 4: g=4;break;
    case 5: g=5;break;
    case 6: g=6;  break;
    break;}}
     switch(month){
  case 9:
  case 12:
  switch(b){
    case 0: g=1;break;
    case 1: g=2;break;
    case 2: g=3;break;
    case 3: g=4;break;
    case 4: g=5;break;
    case 5: g=6;break;
    case 6: g=0; break; 
    break;}}
     switch(month){
  case 10:
  switch(b){
    case 0: g=3;break;
    case 1: g=4;break;
    case 2: g=5;break;
    case 3: g=6;break;
    case 4: g=0;break;
    case 5: g=1;break;
    case 6: g=2;break;
    break;}}
  switch(month)
  {
    case 2:
    if(day>29)
      {g=7; break;}
    case 11:
    case 9:
    case 6:
    case 4:
    if(day>30) 
      {g=7; break;}
  }
  if (day>31) g=7;
  return g;
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
