#include <keyval.h>

#define TYPENAME KeyVal

////////////////////////////////////////////////////////////////////////////////
KeyVal *_(Construct)(KeyValEnvironment *env)
{
  if (Pair_Construct(BASE(0))) {    
    this->env = env;
  }

  return this;
}

////////////////////////////////////////////////////////////////////////////////
void _(Destruct)()
{
  Pair_Destruct(BASE(0));
}

////////////////////////////////////////////////////////////////////////////////
int _(Comparer)(void *reference)
{
  return this->env->comparer(BASE(0)->first, reference);
}

////////////////////////////////////////////////////////////////////////////////
int _(KeyComparer)(void *reference)
{
  return this->env->keyComparer(BASE(0)->first, reference);
}

#undef TYPENAME
