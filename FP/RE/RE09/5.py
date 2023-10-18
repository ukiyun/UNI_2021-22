from functools import reduce
def reduce_map_filter(args):
    if len(args)==1:
        return ''
    else:
        op, f, arg = args
        if len(arg)==1:
            if (op == 'map'):
               end = map(f,arg)
            if (op == 'reduce'):
               end = reduce(f,arg)
            if (op == 'filter'):
               end = filter(f,arg)
        else:
            op,f, arg = arg
            

