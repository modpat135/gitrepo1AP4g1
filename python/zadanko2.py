#!/usr/bin/env python
# -*- coding: utf-8 -*-




def main(args):
    start = stop = 0
    while start < 1:
        start = int(input('Podaj początek zakresu: '))
    while stop < 1 or stop <= start:
        stop = int(input('Podaj koniec zakresu: '))
        
    
    for i in range(start, stop+1):
        print(i, ' ', end = '')
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
