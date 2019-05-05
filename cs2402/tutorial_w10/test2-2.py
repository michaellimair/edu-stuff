my_list = [12, 34, 18, 27, 20, 11, 24, 10, 25, 15]
list_length = 10
print('The array is: ', my_list)    # print is a function

# compute the mean of the random list
list_sum = 0
for i in my_list:
    list_sum += i    # the sum of my_list
list_mean = list_sum/list_length     # the mean of my_list
print('The mean of the array is: ',list_mean)

# compute the variance of the random list
list_vars = 0
for i in my_list:
    list_vars += (abs(i-list_mean)) * (abs(i-list_mean)) # sum of the squared deviation of a variable from its mean
list_var = list_vars/(list_length)
print('The variance of the array is: ',list_var)
