test_list = [[1,2,3],[3,2,1]]

max = 0
for j_list in test_list: 
    sum = 0
    for item in j_list: 
       sum += item
    if sum >= max: 
        max = sum 

print(max) 
