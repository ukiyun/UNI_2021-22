def file_finder(dirs, file_name):
    if (len(dirs) == 0):
        return ()
    if isinstance (dirs[0], tuple):
        if (file_name!= dirs[0][0]):
            return file_finder(dirs[0][1:], file_name)
        else:
            return None
    if isinstance (dirs, list):
        if (dirs[0] == list):
            if (dirs[0][0]== file_name):
                return file_finder(dirs[0][0], file_name)
            else:
                return file_finder(dirs[0][1:], file_name)

        if not (dirs[0] == list):
            return file_finder (dirs[1:], file_name)




print(file_finder(("home", [("Documents", [("FP", ["lists.txt", "recursion.pdf", "functions", "tmp.txt" ]), ("Python", ["hello_world.py", "readme.md" ])]), ("Downloads", [("Movies", [("TV Series", ["BreakingBad.mp4", "TheBigBangTheory.avi" ]), "1.avi", "22", "001.mp4"])]), "tmp.txt", "page.html"]), "Documents"))




'''

dirs = ("home", [
          ("Documents", [
             ("FP", ["lists.txt", "recursion.pdf", "functions.ipynb"]),
             ("Python", ["hello_world.py", "readme.md"])
          ]),
          ("Downloads", [
             ("Movies", [
                ("TV Series", ["BreakingBad.mp4", "TheBigBangTheory.avi"]),
                "1.avi", "22", "001.mp4" 
             ])
          ]),
          "tmp.txt", "page.html"])


file_finder(dirs, 'Documents') returns: None (because Documents is a sub-directory not a file)
file_finder(dirs, 'recursion.pdf') returns the string: "home/Documents/FP/recursion.pdf"

'''

def file_finder(dirs, file_name):
    diretorio = dirs[0]
    conteudo = dirs[1]
    for valor in conteudo:
        if valor == file_name:
            return dirs[:valor+1]
    if (file_name == diretorio):
        return file_finder (conteudo, file_name)





def file_finder(dirs, file_name):
    diretorio = dirs[0]
    if (len(dirs) == 1):
        conteudo = dirs[0]
    else:
        conteudo = dirs[1]
    if (diretorio == file_name):
        return None 
    else:
        if isinstance (conteudo[0], list):
            return file_finder(conteudo[0], file_name)
        else:
            return file_finder(conteudo, file_name)
    else:    
        for i in conteudo:
            if conteudo[i] == file_name:
                return dirs[:i]
  
print(file_finder(("home", [("Documents", [("FP", ["lists.txt", "recursion.pdf", "functions", "tmp.txt" ]), ("Python", ["hello_world.py", "readme.md" ])]), ("Downloads", [("Movies", [("TV Series", ["BreakingBad.mp4", "TheBigBangTheory.avi" ]), "1.avi", "22", "001.mp4"])]), "tmp.txt", "page.html"]), 'page.html'))

definitive version:




def file_finder(dirs, filename):
    directory, tree = dirs
    for direct in tree:
        if type(direct) == tuple:
            new_path = file_finder(direct, filename)
            if new_path:
                return directory + "/" + new_path
        elif direct == filename:
            return directory + "/" + filename
