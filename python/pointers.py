# Caso imutável
x = 1000
y = x
print(id(x), id(y))   # iguais (você já viu)
y = 2000
print(id(x), id(y))   # e AGORA? id(y) mudou? id(x) mudou?

# Caso mutável
a = [1, 2, 3]
b = a
b.append(4)
print(id(a), id(b))   # iguais ou diferentes?
print(a)              # a "sentiu" o append?
