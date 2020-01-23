#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kalkulator.py

wynik = 0


def pobierzliczbe():
    liczba1 = input('Podaj liczbę: ')
    return liczba1

def dodaj(liczba1 + liczba2):
    global wynik
    wynik = liczba1 + liczba2

def odejmij():
    wynik= liczba1 - liczba2
    pass
    
def pomnoz():
    wynik= liczba1 * liczba2
    pass
    
def podziel():
    wynik= liczba1 / liczba2
    pass


def main(args):
    operacja = input('Podaj działanie które chcesz wykonać(+,-,*,/): ')
    liczba1 = pobierzliczbe()
    liczba2 = pobierzliczbe()
    
    if operacja == '+':
        dodaj(liczba1, liczba2)
    elif operacja == '-':
        odejmij(liczba1, liczba2)
    elif operacja == '*':
        pomnoz(liczba1, liczba2)
    elif operacja == '/':
        podziel(liczba1, liczba2)
    else:
        print ('coś jest nie tak')
    
    print (wynik)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
