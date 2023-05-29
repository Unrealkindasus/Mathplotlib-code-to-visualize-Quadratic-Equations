#include <iostream>
#include <string>

std::string generateMathplotlibCode(double a, double b, double c)
{
    std::string code = "import numpy as np\n";
    code += "import matplotlib.pyplot as plt\n";
    code += "x = np.linspace(-10, 10, 500)\n";
    code += "y = " + std::to_string(a) + " * x**2 + " + std::to_string(b) + " * x + " + std::to_string(c) + "\n";
    code += "plt.plot(x, y)\n";
    code += "plt.xlabel('x')\n";
    code += "plt.ylabel('y')\n";
    code += "plt.title('Quadratic Equation')\n";
    code += "plt.grid(True)\n";
    code += "plt.show()\n";

    return code;
}

int main()
{
    // Get quadratic equation coefficients from the user
    double a, b, c;
    std::cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c):" << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    // Generate Mathplotlib code
    std::string matplotlibCode = generateMathplotlibCode(a, b, c);

    // Print the generated code
    std::cout << "\nGenerated Mathplotlib code:\n\n";
    std::cout << matplotlibCode << std::endl;

    return 0;
}
