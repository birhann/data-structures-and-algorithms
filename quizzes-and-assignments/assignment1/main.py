import random

def sirala(karisik_dizi):
    dizi2 = [karisik_dizi.count(i) for i in karisik_dizi]
    tekrar_sayi_dizi = list(set(zip(karisik_dizi,dizi2)))
    duzgun_dizi = []
    for i in range(len(tekrar_sayi_dizi)):
        for j in range(len(tekrar_sayi_dizi)):
            if tekrar_sayi_dizi[i][1]<tekrar_sayi_dizi[j][1]:
                tekrar_sayi_dizi[i], tekrar_sayi_dizi[j] = tekrar_sayi_dizi[j], tekrar_sayi_dizi[i]
     
    for i in tekrar_sayi_dizi:
        for j in range(i[1]):
            duzgun_dizi.append(i[0])

    return duzgun_dizi


print(sirala([random.randint(0, 10) for i in range(0, 10)]))