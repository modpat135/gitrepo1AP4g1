#!/usr/bin/env python
# -*- coding: utf-8 -*-


    
def main(args):
    
    a = int(input('Podaj liczbę: '))
    while a > 0 and a % 5 == 0:
        print('Jest podzielna przez 5')
            
            
            
            
    return 0

if __name__ == '__main__':
    
    import sys
    sys.exit(main(sys.argv))
