# Mathplotlib-code-to-visualize-Quadratic-Equations
This C++ program generates Mathplotlib code to visualize a quadratic equation in a coordinate system. A quadratic equation is a polynomial equation of degree 2, expressed in the form ax^2 + bx + c, where 'a', 'b', and 'c' are constants and 'x' represents the variable.

The program prompts the user to enter the coefficients 'a', 'b', and 'c' of the quadratic equation. These coefficients determine the shape and position of the parabolic curve that represents the equation in a 2D coordinate system.

The generateMathplotlibCode function takes the coefficients as inputs and constructs the Mathplotlib code necessary to plot the quadratic equation. It first imports the required libraries, numpy and matplotlib, which provide functions for numerical computation and plotting, respectively.

Next, the function generates a set of x-values using the np.linspace function from numpy. This creates an array of evenly spaced values between -10 and 10, with a total of 500 points. These x-values will be used to evaluate the quadratic equation and plot the corresponding y-values.

The function then defines the quadratic equation using the provided coefficients, 'a', 'b', and 'c'. It calculates the y-values by evaluating the quadratic equation for each x-value in the array.

Using the plt.plot function from matplotlib, the function plots the x and y values as a line graph. It adds labels to the x and y axes using plt.xlabel and plt.ylabel, respectively. The title of the plot is set using plt.title. Gridlines are enabled with plt.grid(True) to aid in visualization.

Finally, the function displays the plot using plt.show(), which opens a window to show the generated graph.

In the main function, the program interacts with the user by prompting for the coefficients of the quadratic equation. It then calls the generateMathplotlibCode function with the provided coefficients to generate the Mathplotlib code. The generated code is then displayed on the console, which the user can copy and execute in a Python environment with Mathplotlib installed to visualize the quadratic equation graph.
