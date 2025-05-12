using System;

namespace Firstcode
{
    class Program
    {
        static void Main(string[] args)
        {
            // Generate a random number between 1 and 100
            Random random = new Random();
            int targetNumber = random.Next(1, 101);
            int userGuess = 0;
            int attempts = 0;

            Console.WriteLine("Welcome to the Number Guessing Game!");
            Console.WriteLine("I have selected a random number between 1 and 100.");
            Console.WriteLine("Try to guess it!");

            // Loop until the user guesses the number
            while (userGuess != targetNumber)
            {
                Console.Write("Enter your guess: ");
                string input = Console.ReadLine();

                
                if (int.TryParse(input, out userGuess))
                {
                    attempts++;
                    if (userGuess < targetNumber)
                    {
                        Console.WriteLine("Too low! Try again.");
                    }
                    else if (userGuess > targetNumber)
                    {
                        Console.WriteLine("Too high! Try again.");
                    }
                    else
                    {
                        Console.WriteLine($"Congratulations! You've guessed the number in {attempts} attempts.");
                    }
                }
                else
                {
                    Console.WriteLine("Please enter a valid number.");
                }
            }
        }
    }
}
