file_name = "Python/20-Reading-From-and-Writing-To-Files/my_first_file.txt"
with open(file_name, "a") as file_object:
    file_object.write("next line 1 of 2\n")
    file_object.write("next line 2 of 2\n")