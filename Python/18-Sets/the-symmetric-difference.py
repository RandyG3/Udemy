candy_bars = {"Milky Way", "Snickers", "100 Grand"}
sweet_things = {"Sour Patch Kids", "Reeses Pieces", "Snickers"}

# Not shared by both sets
# The symmetric_difference method returns with elements
# that are in either of the sets but are NOT shared by both sets.

print(candy_bars.symmetric_difference(sweet_things))
print(candy_bars ^ sweet_things)