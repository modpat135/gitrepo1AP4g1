#!/usr/bin/env python
# -*- coding: utf-8 -*-



def main(args):
    print('zobaczysz, że maszyna jest od ciebie mądrzejsza')
    # a = 10
    a = int(input('podaj liczbę: '))
    # b = 5
    b = int(input('podaj liczbę: '))
    # print('Suma:', a+b)
    if a > b:
        print ('a > b')
    elif b > a:
        print('a < b')
    else:
        print ('a = b')
        
        
    # print(a + b)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
