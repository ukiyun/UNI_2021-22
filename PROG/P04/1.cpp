#include "alist.cpp"

void append(alist* a, const alist* b)
{
    if (!a->size && !b->size)
        return;

    // total size
    int tsize = a->size + b->size;

    int *v = new int[tsize];
    for (int i = 0; i < a->size; i++)
    {
        v[i] = a->elements[i];
    }

    for (int i = 0; i < b->size; i++)
    {
        v[a->size + i] = b->elements[i];
    }

    delete [] a->elements;

    a->size = tsize;
    a->elements = v;
}