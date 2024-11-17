# programma che aggiunge un elemento nella lista senza l'utilizzo di append()

lista = [1, 2, 3, 4, 5]

def aggiungi_elemento(lst, elemento):
    return lst + [elemento]

risultato = aggiungi_elemento(lista, 6)

print(risultato)