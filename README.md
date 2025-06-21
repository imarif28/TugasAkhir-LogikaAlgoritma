# Call Cost Calculator

## Project Description

This project is a simple C-based program to calculate call costs based on call duration and the selected provider. It was developed as part of the Final Project for the Logic and Algorithm Practice course.

## Features

- Calculate call duration in seconds.
- Provide provider options (Telkomsel, Indosat, Tri).
- Calculate call costs based on the selected provider.
- Allow users to repeat the process or exit the program.

## Technologies Used

- **Programming Language:** C
- **IDE:** Code::Blocks
- **Libraries:**
  - `stdio.h` (Input/Output)
  - `stdlib.h` (Conversion and comparison operations)

## How the Program Works

1. **Input Call Duration:**  
   The user is prompted to enter the start and end times of the call. The program calculates the call duration in seconds.

2. **Provider Selection:**  
   The user can choose one of three available providers. Costs are calculated based on the selected provider.

3. **Menu Loop:**  
   The user can return to the menu to calculate costs with different durations or providers, or exit the program.

## Code Structure

- **Variable Declarations:**  
  Variables such as `jamA`, `menitA`, `jamB`, `menitB` are used to store call times.  
  The `biaya` variable stores the cost per second for each provider.

- **Calculation Logic:**  
  Arithmetic operations are used to calculate the call duration.  
  The `switch-case` structure is used to handle provider selection.  
  A `do-while` loop is implemented to allow users to repeat the process.

- **Error Handling:**  
  Invalid inputs are handled through the `default` condition in the `switch-case`.

## Program Interface

1. **Initial Screen:**  
   Prompts the user to input call duration.

2. **Provider Menu:**  
   Displays provider options.

3. **Final Output:**  
   Shows call costs based on duration and selected provider.

## Installation and Usage

1. **Compile the Program:**  
   - Open the project in Code::Blocks.  
   - Compile and run the program.

2. **Usage Instructions:**  
   - Enter call duration.  
   - Select a provider.  
   - View the calculated call cost.

## Developer

- **Name:** Ilham Muhammad Arif  
- **Course:** Logic and Algorithm Practice  
- **Institution:** Politeknik Negeri Semarang  
