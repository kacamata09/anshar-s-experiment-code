def filterComment(comment, filterKataComment):
    newComment = filterKataComment(comment)
    return newComment

def filterKata(kata):
    if kata in ["sialan", "anj", 'asw', 'anjim', 'anjing']:
        return "waduh bro bro"
    else:
        return kata

def kataBaikChecker(kata):
    if kata not in ["sialan", "anj", 'asw', 'anjim', 'anjing']:
        return "baik bro"
    else:
        return "tidak baik bro"

    
comment = input("Masukkan comment anda : ")
dahlah = filterComment(comment, filterKata)
yaaa = filterComment(comment, kataBaikChecker)
print(dahlah)
print(yaaa)
