mr_freeze = frozenset([1, 2, 3, 2])  # immutable set no add/remove - dups removed
print(mr_freeze)
# mr_freeze.add(4) - can't do this

regular_set = {1, 2, 3}
# print({regular_set: "Some value"})  # Can't do this either

print({mr_freeze: "Some Value"})
