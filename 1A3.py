# 1A2.py Programma funkcijas tuvinātās vērtības aprēķinam summējot skaitļu virknes elementus un lietojot rekurences izteiksmi
# Funkcija exp(x)
# Elvijs Buls
# Datums: 17.01.2020

import math

N = 8 # konstante N
a = 1 # tekošais loceklis
x = 1 # izvēlēts funkcijas arguments

summa = a #summa ir pirmā locekļa vērtība

print("N =",N,", Sākuma summa =",summa)

k = 1

while(k<=N):
	a = a * x/k
	summa = summa + a
	print(k,". summas loceklis ir ",round(a,5))
	k = k + 1

y = math.exp(x)

print("x =",round(x,5),", y = ",round(y,5),", Summa =",round(summa,5))
