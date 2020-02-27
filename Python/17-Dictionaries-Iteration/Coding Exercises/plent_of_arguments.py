# Declare a plenty_of_arguments function that accepts two parameters (a and b)
# and an additional **kwargs parameter.
#
# The function should return True if the sum of a, b, and the
# values of the kwargs dictionary is greater than 100.
# It should return False otherwise.
#
# plenty_of_arguments(20, 30) => False
# plenty_of_arguments(a = 50, b = 75) => True
# plenty_of_arguments(a = 50, b = 25, c = 50) => True
# plenty_of_arguments(a = 25, b = 25, c = 25, d = 25) => False
# plenty_of_arguments(a = 25, b = 25, c = 25, d = 26) => True


def plenty_of_arguments(a, b, **kwargs):
    total = a + b

    for value in kwargs.values():
        total += value
    return True if total > 100 else False


print(plenty_of_arguments(20, 30))
print(plenty_of_arguments(a=50, b=75))
print(plenty_of_arguments(a=50, b=25, c=50))
print(plenty_of_arguments(a=25, b=25, c=25, d=25))
print(plenty_of_arguments(a=25, b=25, c=25, d=26))