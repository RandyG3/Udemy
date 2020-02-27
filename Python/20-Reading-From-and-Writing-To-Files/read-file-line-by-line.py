with open("Python/20-Reading-From-and-Writing-To-Files/cupcakes.txt") as file_object:
    for line in file_object:
        print(line.rstrip())