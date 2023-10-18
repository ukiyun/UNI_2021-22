def wiener (board): #check if a given position in free space will win you the game
    value = False 
    if (board[0][0]==board[0][1]==board[0][2]!= ' '):
        value = True
    if (board[1][0]==board[1][1]==board[1][2]!= ' '):
        value = True
    if (board[2][0]==board[2][1]==board[2][2]!= ' '):
        value = True
    if (board[0][0]==board[1][0]==board[2][0]!= ' '):
        value = True
    if (board[0][1]==board[1][1]==board[2][1]!= ' '):
        value = True
    if (board[0][2]==board[1][2]==board[2][2]!= ' '):
        value = True
    if (board[0][0]==board[1][1]==board[2][2]!= ' '):
        value = True
    if (board[0][2]==board[1][1]==board[2][0]!= ' '):
        value = True
    return value
    


def tic_tac_toe(board, player):
    linha = {0:'A', 1:'B', 2:'C'}
    coluna = {0:'1', 1:'2', 2:'3'}
    board = board.split('\n')
    board = list(map(list, board))
    for l in range (0,3):
        for c in range (0,3):
            if (board[l][c]== ' '):
                board[l][c] = player
                if wiener(board):
                    line = linha.get(l)
                    collumn = coluna.get(c)
                    return line+collumn
                board[l][c] = ' '