# python code for least square regression

import matplotlib.pyplot as plt
import numpy as np

x = np.array([6, 8, 10, 14, 18])   #Pizza sizes
y = np.array([7, 9, 13, 17.5, 18]) #Pizza prices


## This function is for estimating the linear model parameters for (x, y)##
def estimate_coef():
    n = len(x) # number of data x
    m_x = np.mean(x) # mean of data x
    m_y = np.mean(y) # mean of data y
    S_xy = np.sum((x-m_x)*(y-m_y)) # Sxy
    S_xx = np.sum(pow((x-m_x),2)) # Sxx
    b_1  = S_xy/S_xx
    b_0  = m_y - b_1 * m_x
    return(b_0, b_1)
    


# The plot function #
def runplt():
    plt.figure()
    plt.title("Figure")          # Add the figure title
    plt.xlabel("Pizza Size")     # Add horizontal lable name
    plt.ylabel("Pizza Price")    # Add vertical lable name: Pizza Price
    plt.axis([0, 25, 0, 30])     # Define the plot range according
                                 # to your data[xMin, xMax, yMin, yMax]
    return plt



estCoeff = estimate_coef() # Assign the estimation linear
                           # parameter b0 and b1 to estCoeff
print(estCoeff)            # Print out the parameters

## Plot the scatter and draw the regression line ##
x1 = np.array([0, 25])
y1  = estCoeff[0] + estCoeff[1] * x1
plt.plot(x, y, 'k.')
plt.plot(x1, y1, 'g-')
plt.show()



