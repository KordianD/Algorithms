import numpy 
import matplotlib.pyplot as plt
import pandas

X = []
Y = []

database = pandas.read_csv("ex1.csv", header=None)
X = database[0]
Y = database[1]

N = len(X)
X = numpy.array(X)
Y = numpy.array(Y)


X = X.reshape((N, 1))
Y = Y.reshape((N, 1))

def cost_function(theta, X, Y):
    cost = 0
    for i in range(0, len(X)):
        cost += (theta[1]*X[i] + theta[0] - Y[i])**2
    return cost/len(X)
    
def gradient_step(theta, X, Y, alpha):
    new_theta = [0, 0]
    derativeTheta0 =  0.0
    derativeTheta1  = 0.0
    for i in range(0, len(X)):
        derativeTheta0 += 2*(theta[1]*X[i] + theta[0] - Y[i])/len(X)
        derativeTheta1 += 2*(theta[1]*X[i] + theta[0] - Y[i])*X[i]/len(X)
    new_theta[0] = theta[0] - alpha * derativeTheta0;
    new_theta[1] = theta[1] - alpha * derativeTheta1;
    return new_theta;
    
def gradient_descent(theta, X, Y, alpha, steps):
    for i in range(steps):
        if i%100 == 0:
            print("Current cost: ", cost_function(theta, X, Y))
        theta = gradient_step(theta, X, Y, alpha)     
    return theta
    
    
start_theta  = numpy.zeros(2)   
theta = gradient_descent(start_theta, X, Y, 0.00001, 2000)


plt.plot(X, Y, 'b.')

est_x = numpy.linspace(min(X), max(X))
est_y = [theta[1]*x + theta[0] for x in est_x]
plt.plot(est_x, est_y, 'r')
plt.show()
    