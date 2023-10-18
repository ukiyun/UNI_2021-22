def binary_tree(key, tree):
    if not isinstance(tree, tuple):
        return 0
    
    if tree[0] == key:
        return tree[1]
    if key < tree[0]:
        return binary_tree(key, tree[2]())
    else:
        return binary_tree(key, tree[3]())