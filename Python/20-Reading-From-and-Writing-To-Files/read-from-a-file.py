with open("Python/20-Reading-From-and-Writing-To-Files/cupcakes.txt", "r") as cupcakes_file:
    print("The file has been opened!")
    content = cupcakes_file.read()
    print(content)


print("The file has been closed. We are outside the content block")
