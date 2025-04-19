**OOPhorserace**

**Understand the goal*
The purpose of the project is to create a horse race simulation using C++ and object-oriented programming. The program should have multiple horses, show them racing, and declare a winner at the end.

**Identify the main parts (classes)*
First, I thought about what objects I’d need. Since it’s a horse race, I figured I’d need a Horse class to represent each horse and a Race class to manage the race itself. There would also be a main function to run everything.

**Create the files*
I made separate files for each class: header files (.h) and implementation files (.cpp). I also had a main.cpp file and a Makefile to compile the code.

**Write the Horse class*
In the Horse class, I added variables to track the horse’s number and position on the track. I added functions for moving the horse forward, printing its position, and checking if it won.

**Write the Race class*
The Race class stored an array of Horse objects and had a function to run the race. Inside that function, it moved all the horses and checked who won. I had to make sure to pass the length of the race to the horses to check for a winner.

**Set up the main function*
In the main file, I created a Race object and called its run function to start the simulation.

**Fix errors during compiling*
When I ran into errors, I looked at what the compiler said and fixed them one by one. Some were about missing constructors or forgetting to pass variables like the race length. Others were about using . instead of -> depending on whether I was using an object or a pointer.

**Use a Makefile to compile*
I wrote a Makefile to simplify compiling. It helps me build everything by just typing make. I also added a make clean command to remove old files before building again.

**Test the program*
After everything compiled without errors, I ran the program. The horses raced across the screen, and it showed the winner. That’s how I knew it worked.
