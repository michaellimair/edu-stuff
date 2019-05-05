# Python code for computing of Pi;
# Simulation with a cubic and sphere;
import random

N = 10000000 # Initial the number of samples with N;
N = int(N)
M = 0         # M is used for recording the number of points that lie
              # inside the sphere;

for i in range(1, N+1):
    x = random.uniform(-1.0, 1.0) # Randomly get x from [-1, 1];
    y = random.uniform(-1.0, 1.0) # Randomly get y from [-1, 1];
    z = random.uniform(-1.0, 1.0) # Randomly get z from [-1, 1];
    if x*x + y*y +z*z < 1:           # Count the number of points that lie inside the circle;   
        M += 1

Pi = 6*M/N                  # Calculate Pi with M and N
    
print (Pi)                           # Print out Pi
