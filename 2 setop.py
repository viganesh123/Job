def union(setA, setB):
    # Initialize union set
    union_set = setA.copy()
    
    # Copy elements of setB not present in setA to union_set
    for x in setB:
        if x not in setA:
            union_set.add(x)
    
    return union_set

def intersection(setA, setB):
    # Initialize intersection set
    intersection_set = set()
    
    # Copy elements present in both setA and setB to intersection_set
    for x in setA:
        if x in setB:
            intersection_set.add(x)
    
    return intersection_set

def difference(setA, setB):
    # Initialize difference set
    difference_set = set()
    
    # Copy elements of setA not present in setB to difference_set
    for x in setA:
        if x not in setB:
            difference_set.add(x)
    
    return difference_set

def subset(setA, setB):
    # Check if every element of setA is present in setB
    for x in setA:
        if x not in setB:
            return False
    
    return True

def proper_subset(setA, setB):
    # Check if every element of setA is present in setB and setB is strictly larger than setA
    if subset(setA, setB) and len(setB) > len(setA):
        return True
    
    return False

# Take input from the user for sets A and B
setA_input = input("Enter elements of set A separated by space: ")
setB_input = input("Enter elements of set B separated by space: ")

# Convert input strings to sets
A = set(map(int, setA_input.split()))
B = set(map(int, setB_input.split()))

# Perform set operations and print the results
print("Union:", union(A, B))
print("Intersection:", intersection(A, B))
print("Difference:", difference(A, B))
print("Subset:", subset(A, B))
print("Proper Subset:", proper_subset(A, B))
