# DAY-1
Candies - Greedy Algorithm

Prolem Statement

Each student has ratings
- To distribute minimum of 1 candy to each student
- If the current student has highest rating among his LEFT & RIGHT neighbour he should have more candies than both neighbouring students.
Catch is  " Have minimum number of candies distributed "

Solution Approach :

I have traversed 'left to right' once & then from 'right to left'. While traversing left -right compared current student rating with LEFT student rating & increased candies of current after comparing candies between both.Similarly traversed from back comparing with RIGHT student.
