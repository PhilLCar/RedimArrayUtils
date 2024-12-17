#ifndef KEYVAL_H
#define KEYVAL_H

#include <diagnostic.h>
#include <oop.h>

#include "pair.h"
#include "set.h"

#define TYPENAME KeyVal

typedef struct {
  Comparer comparer;
  Comparer keyComparer;
} KeyValEnvironment;

OBJECT (KeyValEnvironment *env) INHERIT (Pair)
  KeyValEnvironment *env;
END_OBJECT(NULL);

int _(Comparer)   (void *reference) VIRTUAL (Comparer);
int _(KeyComparer)(void *reference) VIRTUAL (KeyComparer);

#undef TYPENAME
#endif