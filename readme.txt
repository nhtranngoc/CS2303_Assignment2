CS2303 Assignment 2

by nhtranngoc

#Building the programs:
In the directory, type in: 
make

To clean up: type: 
make clean

to make the documentation and put them under /public_html, type: 
make docs


#Programs:

##at

This program creates an array of 10 consecutive integers and doubles, then print them to the command line.
To run: type in 
./at

The output of the program:
0
1
2
3
4
5
6
7
8
9
0.00
1.00
2.00
3.00
4.00
5.00
6.00
7.00
8.00
9.00


##at2

This program fills in an array, print them, sort them, then print them again
To run: type in
./at2 [number_1] [number_2] ...

The output of the program:
For example, the following call generates the following output: 
./at2 3 4 5 8 9 1 2

Output:
3
4
5
8
9
1
2

Sorted array is

1
2
3
4
5
8
9


##at3


This program generates a random array of integers
To run: type in
./at3

The output of the program:
Since the seed is generated randomly, every time the output will be different. The output will look like the following:


32
45
2
3
89
23
4
1
6
93
34
76
18
53
91
85
34
86
8
45
Sorted array:

The sorted array is:
1
2
3
4
6
8
18
23
32
34
34
45
45
53
76
85
86
89
91
93
