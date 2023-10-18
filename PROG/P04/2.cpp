#include "node.cpp"

node* remove(int x, node* n)
{
    if (n == nullptr)
        return n;

    if (n->value == x)
    {
        node *firstNode = n->next;
        n->next = nullptr;
        destroy(n);

        return firstNode;
    }

    node *firstNode = n;
    node *prev;

    while (n->value != x)
    {
        if (n->next == nullptr)
            return firstNode;

        prev = n;
        n = n->next;
    }

    prev->next = n->next;
    n->next = nullptr;
    destroy(n);

    return firstNode;
}