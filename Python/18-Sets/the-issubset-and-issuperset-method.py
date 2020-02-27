a = {1, 2, 4}
b = {1, 2, 3, 4, 5}

# returns T/F

print(a.issubset(b))  # True
print(a < b)          # All
print(a <= b)         # the same
print()
print(b.issubset(a))  # No, b is the superset
print()
print(b.issuperset(a))  #
print(b > a)            # All
print(b >= a)           # the same
print()
print(a.issuperset(b))  # No, b is the superset
