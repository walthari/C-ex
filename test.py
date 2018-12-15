# if, for Statements and other stuff
words = ['cat', 'window', 'international']
for w in words:
    print(w, len(w))

for w in words[:]:
    if len(w) > 6:
        words.insert(0, w)
    print(words)

# range Function
x = ['Mary', 'had', 'a', 'little', 'lamb']
for i in range(len(x)):
    print(i, x[i])

# Loops: break, continue, else Loops
for n in range(2, 10):
    for x in range(2, n):
        if n % x == 0:
            print(n, 'equals',  x, '*', n//x)
            break
    else:
        print(n, 'is a prime number')

for num in range(2, 10):
    if num % 2 == 0:
            print(num, 'is an even number')
            continue
    else:
        print(num, 'is an odd number')


# Defining Functions


def fib(n):
    a, b = 0, 1
    while a < n:
        print(a,end=' ')
        a, b = b, a+b
    print()


def fib2(n):
    result = []
    a, b = 0, 1
    while a < n:
        result.append(a)
        a, b = b, a+b
    return(result)


def ask_ok(prompt, retries=3, complaint='Yes or no, please!'):
    while True:
        ok = input(prompt)
        if ok in ('y', 'yes'):
            return True
        if ok in ('n', 'no'):
            return False
        retries = retries - 1
        if retries < 0:
            raise OSError('uncooperative user')
        print(complaint)


def f(a, L=[]):
    L.append(a)
    return(L)


def f(a, L=None):
    if L is None:
        L = []
    L.append(a)
    return(L) 


def cheeseshop(kind, *arguments, **keywords):
    print('--Do you have any', kind, '?')
    print('--I\'m sorry, we\'re all out of', kind)
    for arg in arguments: 
        print(arg)
    print('-' * 40)
    keys = sorted(keywords.keys())
    for kw in keys:
        print(kw, ':', keywords[kw])





