#!/usr/bin/env python
# -*- coding: utf-8 -*-



def main(args):
    a = int(input('podaj bok 1: '))
    b = int(input('podaj bok 2: '))
    c = int(input('podaj bok 3: '))
    
    # ~if a + b > c:
        # ~if b + c > a:
            # ~if a + c > b:
                # ~print('da się zbudować')
                # ~return 0
    if a + b > c and b + c > a and a + c > b:
        print('da się zbudować')
    else:
        print('nie da się')
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
