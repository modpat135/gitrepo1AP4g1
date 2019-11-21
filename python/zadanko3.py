#!/usr/bin/env python
# -*- coding: utf-8 -*-



def main(args):
    start = 0
    stop = int(input('Podaj koniec zakresu: '))
    if stop < 0:
        #print('za te kpiny nie uruchomię pętli')
         
    for i in range(start, stop+1):
        print(i*i)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
