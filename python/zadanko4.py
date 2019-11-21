#!/usr/bin/env python
# -*- coding: utf-8 -*-



def main(args):
    start = 10
    stop = int(input('Podaj koniec zakresu: '))
    for i in range(start, stop+1, 2):
        if i % 3 == 0:
            print(i)
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
