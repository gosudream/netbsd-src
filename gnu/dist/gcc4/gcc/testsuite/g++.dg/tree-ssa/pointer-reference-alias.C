/* { dg-do compile } */
/* { dg-options "-O1 -fdump-tree-vars" } */

int f(int *a)
{
  int &b = *a;
  b = 0;
  return *a;
}

/* There should be only one dereferencing of a. */
/* { dg-final { scan-tree-dump-times "\\*a" 1 "vars" } } */
/* { dg-final { cleanup-tree-dump "vars" } } */
