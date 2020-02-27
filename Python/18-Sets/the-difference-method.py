candy_bars = {"Milky Way", "Snickers", "100 Grand"}
sweet_things = {"Sour Patch Kids", "Reeses Pieces", "Snickers"}

# Find exclusive elements;
# What's in the 1st that's not in the 2nd
print(candy_bars.difference(sweet_things))
print()
print(candy_bars - sweet_things)
print()
print(sweet_things.difference(candy_bars))
print()
print(sweet_things - candy_bars)
