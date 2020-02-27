foods = "Sushi", "Steak", "Guacamole"       # This creates a Tuple
foods = ("Sushi", "Steak", "Guacamole")     # This is also a Tuple - makes it more obvious

print(type(foods))

# Empty tuple must be ()
empty = ()
print(type(empty))

mystery = (1)
print(type(mystery))

mystery = (1, )
print(type(mystery))

print(tuple(["Sushi", "Steak", "Guacamole"]))
print(type(["Sushi", "Steak", "Guacamole"]))


