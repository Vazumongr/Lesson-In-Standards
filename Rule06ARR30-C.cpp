/*
 * Violation of Rule06 ARR30-C
 * Method attempts to verify index
 * for accessing array but doens't verify
 * for non-negative values.
 */


enum { TABLESIZE = 100 };
 
static int table[TABLESIZE];
 
int *f(int index) {
  if (index < TABLESIZE) {
    return table + index;
  }
  return NULL;
}