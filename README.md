# Dante's Star

## <img width="26px" src="https://newsroom.ionis-group.com/wp-content/uploads/2018/12/epitech-logo-signature-quadri.png"/> Epitech project :

Creates a random maze of any size and can also solve it.

---

### Maze format description :
• Mazes are rectangular.
<br>
• They are coded in ASCII.
<br>
• The ‘X’s represent the walls and the ’*’s represent the free spaces.
<br>
• It is possible to move to the four surrounding squares (up, down, right, left).
<br>
• “Start” is in the upper left-hand corner (0;0)
<br>
• “Finish” is in the bottom right-hand corner.
<br>
• A solution is a series of free, adjacent squares, from “Start” to “Finish” included.
<br>
• “Start” and “Finish” can be occupied. In this case, there is no solution.
<br>
• The last line of the maze doesn’t terminate with a return line.
<br>
• Resolution: in order to write the solution in the maze, we use ‘o’ for the solution path.

---

### How to run :
```
./solver maze.txt

./generator x y
   x = width
   y = height
```

---

### :exclamation: Rules :
> System functions and libC are allowed, but no external libraries.

> The maze must have a solution.

---

Made in C
