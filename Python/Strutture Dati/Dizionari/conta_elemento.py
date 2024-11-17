lista = [1, 1, 1, 2, 3, 4 , 2, 4, 1, 5]

def conta_numero(lst):
    dizionario = {}
    for num in lst:
        if num in dizionario:
            dizionario[num] += 1
        else:
            dizionario[num] = 1
    return dizionario

risultato = conta_numero(lista)

print(risultato)