ops = [' + ', ' - ', ' * ', ' // ']

results = {}
for a in ops:
    for b in ops:
        for c in ops:
            val_str = "4{:s}4{:s}4{:s}4".format(a, b, c)
            val = eval(val_str)
            results[val] = val_str.replace('//', '/') + " = {:d}".format(val)

for i in range(0, int(input())):
    n = int(input())
    if n < -60 or n > 256 or n not in results:
        print("no solution")
    else:
        print(results[n])
