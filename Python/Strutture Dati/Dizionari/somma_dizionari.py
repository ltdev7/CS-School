def somma_dizionari(diz, diz2):
    for key, value in diz2.items():
        if key in diz:
            diz[key] += value
        else:
            diz[key] = value
    return diz

d1 = {0 : 1, 1 : 2, 2 : 3, 5 : 4}
d2 = {0 : 1, 1 : 2, 2 : 3, 3 : 4}

risultato = somma_dizionari(d1, d2)

print(risultato)