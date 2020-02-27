# Define a fancy_concatenate function that accepts a list of lists of strings
# The function should return a concatenated string
# The strings in a list should only be concatenated if the length of the list is 3
#
# fancy_concatenate([["A, "B", "C"]]) => "ABC"
# fancy_concatenate([["A", "B", "C"], ["D", "E", "F"]]) => "ABCDEF"
# fancy_concatenate([["A", "B", "C"], ["D", "E", "F", "G"]]) => "ABC"
# fancy_concatenate([["A", "B", "C"], ["D", "E"]]) => "ABC"
# fancy_concatenate([["A", "B"], ["C", "D"]]) => ""


def fancy_concatenate(list_strings):
    fancy = ""
    for string_list in list_strings:
        for word in string_list:
            if len(string_list) == 3:
                fancy += word
    return fancy


print(fancy_concatenate([["A", "B", "C"]]))
print(fancy_concatenate([["A", "B", "C"], ["D", "E", "F"]]))
print(fancy_concatenate([["A", "B", "C"], ["D", "E", "F", "G"]]))
print(fancy_concatenate([["A", "B", "C"], ["D", "E"]]))
print(fancy_concatenate([["A", "B"], ["C", "D"]]))


