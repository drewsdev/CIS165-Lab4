### **CIS-165-W198.2026FA**

In this lab, you will write two short C++ programs, test them, and place the source code in a public GitHub repository. You may use AI to help you plan, learn, debug, and review your work. You remain responsible for testing every result and explaining the code you submit.

This is a 100-point programming assignment. AI-generated code or a repository link by itself does not earn full credit.

## **Pre-Planning**

average.cpp

Start

declare variable1

declare variable2

declare variable3

declare variable4

declare variable5

get sum of the 5 aforementioned variables

divide sum by 5 (to get the average)

output sum

output average

End

ocean\_levels.cpp

Start

declare constant rise increase

declare 5 year variable

declare 7 year variable

declare 10 year variable

calculate rise over 5 years

calculate rise over 7 years

calculate rise over 10 years

output rise over 5 years

output rise over 7 years

output rise over 10 years

End

## **Run the Program**

Compile and run each program separately

Use g++

```
g++ -std=c++17 -Wall -Wextra diamond.cpp -o diamond
./diamond
g++ -std=c++17 -Wall -Wextra game_time.cpp -o game_time
./game_time
```

## **Testing**

| **Program** | **Values Used** | **Expected Result Before Running** | **Actual Output** | **Match or Fix** |
| --- | --- | --- | --- | --- |
| average.cpp | 28, 32, 37, 24, 33 | 30.8 | 30.8 | Match |
| average.cpp | 19, 54, 32, 61, 28 | 38.8 | 38.8 | Match |
| ocean\_levels.cpp | 1.5 | 7.5mm, 10.5mm, 15mm | 7.5mm, 10.5mm, 15mm | Match |
| ocean\_levels.cpp | 2.5 | 12.5mm, 17.5mm, 25mm | 12.5mm, 17.5mm, 25mm | Match |

### **Final Testing**

| **Program** | **Values Used** | **Expected Result Before Running** | **Actual Output** | **Match or Fix** |
| --- | --- | --- | --- | --- |
| average.cpp | 28, 32, 37, 24, 33 | 30.8 | 30.8 | Match |
| ocean\_levels.cpp | 1.5 | 7.5mm, 10.5mm, 15mm | 7.5mm, 10.5mm, 15mm | Match |

## **Explanation**

*   Why should the five values and the average use the `double` data type?
    *   Even though all the values are integers, when calculating average, you don't want the calculate to cut off the fractional answer due to integer division.
*   Trace the assigned values through `sum` and `average`.

| Variable | Calculation | Stored Value |
| --- | --- | --- |
| value1 | 28 | 28 |
| value2 | 32 | 32 |
| value3 | 37 | 37 |
| value4 | 24 | 24 |
| value5 | 33 | 33 |
| sum | 28+32+37+24+33 | 154 |
| average | 154/5 | 30.8 |

*   Why should the average calculation divide the completed sum rather than only the final value?
    *   The calculation for average is run after completing the calculation for the sum, becuase you are calculating the average of 5 numbers. Average is calculated by dividing the sum of the numbers by how many numbers there are.
*   Explain how the ocean-level calculations use the annual rate and number of years.
    *   Every year the ocean-level increases 1.5mm, so multiplying the number of years by the annual rise will get you the correct calculation.

| Variable | Calculation | Stored Value |
| --- | --- | --- |
| 1 | 1.5\*1 | 1.5 |
| 2 | 1.5\*2 | 3 |
| 3 | 1.5\*3 | 4.5 |
| 4 | 1.5\*4 | 6 |
| **5** | **1.5\*5** | **7.5** |
| 6 | 1.5\*6 | 9 |
| **7** | **1.5\*7** | **10.5** |
| 8 | 1.5\*8 | 12 |
| 9 | 1.5\*9 | 13.5 |
| **10** | **1.5\*10** | **15** |

*   Why is the annual ocean-level rate a good candidate for a named constant?
    *   This variable does not change throughout any calculations. This is the fixed assumption for all 3 calculations.
*   Why does the assignment require calculations to be stored before using `cout`?
    *   The "cout" statement finally prints the result back to the user. Storing the calculation before printing makes it easier to read. It also allows me to easily use that variable in other places if needed, like another calculation if I decided to add one.