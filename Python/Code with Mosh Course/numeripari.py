command = 0
cont = 0

for command in range(1, 10):
    if command % 2 == 0:
      print(command)
      cont = cont + 1

print(f"We have {cont} even numbers")
      

