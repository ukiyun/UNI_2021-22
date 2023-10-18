def move_ball(board):
    dir = {'E': (0, 1), 'N': (-1, 0), 'S': (1, 0), 'W': (0, -1)}

    for i, string in enumerate(board):
        board[i] = string.replace('\\', 'C')


    position = (0, 0)
    direction = (0, 0)


    for i, row in enumerate(board):
        for j, element in enumerate(row):
            if element in "NEWS":
                position = (i, j)
                direction = dir[element]
                break

    path = []
    char = ""

    while char != 'X':
        path.append(position)
        char = board[position[0]][position[1]]
        position, direction = new_pos(position, direction, char)


    return path


def new_pos(pos, dir, chr):
    code = {
        ('/', (0, 1)) : (-1, 0),
        ('/', (1, 0)) : (0, -1),
        ('/', (-1, 0)): (0, 1),
        ('/', (0, -1)): (1, 0),
        ('C', (0, 1)) : (1, 0),
        ('C', (1, 0)) : (0, 1),
        ('C', (-1, 0)): (0, -1),
        ('C', (0, -1)): (-1, 0)
    }
    if chr == '/':
        dir = code[(chr, dir)]
    if chr == 'C':
        dir = code[(chr, dir)]
    return ((pos[0] + dir[0], pos[1] + dir[1]), dir) 