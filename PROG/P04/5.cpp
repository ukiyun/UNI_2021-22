#include "svnode.cpp"

svnode* sum(const svnode* a, const svnode* b)
{
    svnode* prev = nullptr;
    svnode* firstNode = nullptr;
    svnode* firstTmp1 = nullptr;
    svnode* firstTmp2 = nullptr;

    if (a == nullptr && b == nullptr)
        return nullptr;

    svnode* tmp1 = nullptr;
    if (a != nullptr) {
        tmp1 = new svnode {a->position, a->value, a->next};
        firstTmp1 = tmp1;
    }

    svnode* tmp2 = nullptr;
    if (b != nullptr) {
        tmp2 = new svnode {b->position, b->value, b->next};
        firstTmp2 = tmp2;
    }

    bool flagFirst = true;

    while (tmp1 != nullptr || tmp2 != nullptr) {

        int pos;
        if (tmp1 != nullptr && tmp2 != nullptr)
            pos = min(tmp1->position, tmp2->position);
        else if (tmp1 != nullptr)
            pos = tmp1->position;
        else
            pos = tmp2->position;

        int sum = 0;

        if (tmp1 != nullptr) {
            if (tmp1->position == pos) {
                sum += tmp1->value;
                svnode *tmp3 = tmp1->next;
                tmp1 = tmp3;
            }
        }

        if (tmp2 != nullptr) {
            if (tmp2->position == pos) {
                sum += tmp2->value;
                svnode* tmp4 = tmp2->next;
                tmp2 = tmp4;
            }
        }

        if (sum)
        {
            svnode* tmpNode = new svnode {pos, sum, nullptr};

            if (flagFirst) {
                firstNode = tmpNode;
                flagFirst = false;
            }
            else
                prev->next = tmpNode;

            prev = tmpNode;
        }
    }

    delete(firstTmp1);
    delete(firstTmp2);
    return firstNode;
}