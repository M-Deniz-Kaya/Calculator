#include <iostream>
#include <limits>

int main() {


    while (true) {

        float a, b; // We use float to hold both int and float values
        char transaction;
        int response = 1;
        long long int factorial = 1;

        std::cout << "First number (enter 'q' to exit): ";
        if (!(std::cin >> a))
        {
            std::cin.clear(); // Resetting error status
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clearing the input buffer
            std::cout << "exiting" << std::endl;
            break;
        }
        std::cout << "Enter transaction (+, -, *, /,!,^): ";
        std::cin >> transaction;

        if (transaction == '!')
        {


            if (a <= 20)
            {


                for (long int i = a; i >= 1; i--)
                {
                    factorial = factorial * i;
                }
                std::cout << factorial << std::endl;
            }
            else
            {
                std::cout << "error: unknown transactioan(20 at most! transaction is done.)\n";
            }
            
            continue;
            
        }
        else {

            std::cout << "second number: ";
            std::cin >> b;
        }
        
       switch (transaction) {
       case '+':
         std::cout << "response : " << a + b << std::endl;
            break;
 
       case '-':
         std::cout << "response : " << a - b << std::endl;
            break;

        case '*':
          std::cout << "response : " << a * b << std::endl;
            break;

       case '/':
          if (b != 0) {
            std::cout << "response : " << a / b << std::endl;
          }
          else {
            std::cout << "error: division by zero!" << std::endl;
          }
            break;
       case'^':

        for (int i = 0; i < b; i++)
        {
            response = response * a;
        }

        std::cout << "sonuc:" << response << std::endl;

         break;

        default:
           std::cout << "unknown transaction." << std::endl;
       
       }

      std::cout << std::endl;
    }
        return 0;
}