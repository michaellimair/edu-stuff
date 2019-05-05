# probability and confidence interval
import math
my_list = [0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0]
count_zero = my_list.count(0) # xx.count(y) to count the number of y's in string xx 
length_list = len(my_list)    # returns the length of my_list
p = count_zero / length_list # probability of zero
print("The list is： ", my_list)     # print my_list  
print("The probability of white ball is: ", p)

n = length_list # gets the length of my_list
n = float(n) # converts the n to a float

leftboundary = p - (1.960 * math.sqrt(p * (1 - p) / n))
rightboundary = p + (1.960 * math.sqrt(p * (1 - p) / n))
print("The leftboundary is %f, the rightboundary is %f" % (leftboundary, rightboundary))

