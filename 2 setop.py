
set1 = set()
set2 = set()
print('Empty_set Data type=', type(set1))

def read_set():

    n = int(input("Enter how many elements you want to add in set A: "))
    for i in range(n):
        element = int(input("Enter a number: "))
        set1.add(element)
    
    n = int(input("Enter how many elements you want to add in set B: "))
    for i in range(n):
        element = int(input("Enter a number: "))
        set2.add(element)
    
    print("Set A =", set1) 
    print("Set B =", set2) 

read_set()

op = 1
while op:
    print("---------- Menu ---------")
    print("1. Add (new Element) - Place a value into the set")
    print("2. Remove (element) - Remove the value")
    print("3. Contains (element) - Return true if element is in collection")
    print("4. Size () - Return number of values in collection")
    print("5. Intersection of two sets") 
    print("6. Union of two sets")
    print("7. Difference between two sets")
    ch = int(input("Enter your choice to perform an operation on the set: "))
    if ch == 1:
        x = int(input("Enter an element to add into set A: "))
        set1.add(x)
        print("After adding new data \nSet A =", set1)  
    elif ch == 2:
        x = int(input("Enter an element to remove from set A: "))
        set1.remove(x)
        print("After removing the element \nSet A =", set1)  
    elif ch == 3:
        x = int(input("Enter an element to check if it's in set A: "))
        if x in set1:
            print("Number Present in Set")
        else:
            print("Number is not Present in Set")
    elif ch == 4:
        print("Set A contains {} elements.".format(len(set1)))
    elif ch == 5:
        print(set1.intersection(set2), '----------', set1 & set2)
    elif ch == 6:
        print(set1.union(set2), '----------', set1 | set2)
    elif ch == 7:
        print(set1.difference(set2), '----------', set1 - set2)
        print(set1.symmetric_difference(set2), '----------', set1 ^ set2)
    op = int(input("Press 0 to exit and 1 to continue: "))


































# Algorithm Union (set A, set B)
#     a) Initialize union U as empty.
#     b) Copy all elements of set A to U.
#     c) Do following for every element x of set B:
#         • If x is not present in A, then copy x to U.
#     d) Return U.
# Algorithm Intersection (set A, set B)
#     1) Initialize intersection set I as empty.
#     2) Do following for every element x of set A:
#     a) If x is present in set B, then copy x to I.
#     3) Return I.
# Algorithm Difference (set A, set B)
#     1) Initialize difference set D as empty.
#     2) Do following for every element x of set A:
#         a) If x is not present in set B, then copy x to D.
#     3) Return D.
# Algorithm Subset (set A, set B)
#     1) Do following for every element x of set A:
#         a) If x is present in set B, then return A is subset of B
#             else
#             return A is not subset of B
# Algorithm Proper Subset (set A, set B)
#     1) Do following for every element x of set A:
#         a) If x is present in set B and B&gt;A, then return A is proper subset of B
#             else
#             return A is not proper subset of B
