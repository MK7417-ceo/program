my_list = []
print("Please enter 7 elements for the list:")
for i in range(7):
    element= input(f"Eleement{i+1}:")
    my_list.append(element)
print("The list you entered is:")
print(my_list)
# search item of list
search_item = input("Enter an item to search in the list:")
if search_item in my_list:
    index = my_list.index(search_item)
    print(f"{search_item} found at index {index}.") 
else:    print(f"{search_item} not found in the list.") 
