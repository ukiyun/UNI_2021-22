#include "dlnode.cpp"

dlnode* insert(dlnode* dln, int k, int v)
{
    if (dln == nullptr)
    {
        dlnode* res = new dlnode {v, nullptr, nullptr};
        return res;
    }

    if (k == 0)
    {
        dlnode* res = new dlnode {v, nullptr, dln};
        dln->prev = res;
        return res;
    }

    dlnode* prev;
    dlnode* firstNode = dln;

    while (k > 0)
    {
        if (dln->next == nullptr)
        {
            dlnode* tmp = new dlnode {v, dln, nullptr};
            dln->next = tmp;

            return firstNode;
        }

        prev = dln;
        dln = dln->next;
        k--;
    }

    dlnode* tmp = new dlnode {v, prev, dln};
    prev->next = tmp;
    dln->prev = tmp;

    return firstNode;
}