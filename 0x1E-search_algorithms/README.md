# 0x1E. C - Search Algorithms

## Resources

**Read or watch:**

- [Search algorith](https://en.wikipedia.org/wiki/Search_algorithm) 
- [Space Complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), **without the help of Google**:

### General

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

### Copyright - Plagiarism

- You are tasked to come up with solutions for the tasks below yurself to meet wuth the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else's work.
- you are not allowd to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from thr program.

## Requirements
### General
- Allowed editors: **vi**, **vim**, **emacs**
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should eend with a new line
- A **README.md** file, at the root of the folder of the project, is mandatory
- Your code should use the **Betty** style. It will be check using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)
- You are not allowd to use global variables
- No more than 5 functions per file
- You are only allowed to use the **printf** function of the standard librry. Any call to another function like **strdup**, **malloc**,...is forbidden.
- In the following examples, the **main.c** files are shown as examples. You can use them to test your functions but you don't have to push them to your repo (if you do we won't take them into account). We will use our own **main.c** files at compilation. Our **main.c** files might be different from the one shown in the examples.
- The protoypes of all your functions should be included inyour header file called **search_algos.h**
- Don't forget to push your header file
- All your header files should be included guarded

## More Info

You will be asked to write files contianing big O notations. Please use this format:
- O(1)
- O(n)
- O(n!)
- n\*m -> O(nm)
- n square -> o(n^2)
- sqrt n -> )(sqrt(n))
- log(n) -> O(log(n))
- n\*log(n) -> O(nlog(n))
- ...

## Tasks

### 0.Linear search

Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)
- **Prototype** : `int linear_search(int *array, size_t size, int value);`
- Where **array** is a pointer to the first element of the array to search in
- **size** is the number of elements in **array**
- And **value** is the value to search for
- Your function must return the first index where **value** is located
- If value is not present in **array** or if **array** is **NULL**, your function must return **-1**
- Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)
- File: **0-linear.c**

### 1. Binary search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

- **Prototype** : `int binary_search(int *array, size_t size, int value);`
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the index where value is located
- You can assume that array will be sorted in ascending order
- You can assume that value won’t appear more than once in array
- If value is not present in array or if array is NULL, your function must return -1
- You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)
- File: **1-binary.c**

### 2. Big O #0

What is the time complexity (worst case) of a linear search in an array of size n?

- File: **2-O**

### 3. Big O #1

What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

- File: 3-O
   
### 4. Big O #2

What is the time complexity (worst case) of a binary search in an array of size n?

- File: 4-O
   
### 5. Big O #3

What is the space complexity (worst case) of a binary search in an array of size n?

- File: 5-O
   
### 6. Big O #4

What is the space complexity of this function / algorithm?

     int \**allocate_map(int n, int m)
     { 
          int \*\*map;

          map = malloc(sizeof(int *) * n);
          for (size_t i = 0; i < n; i++)
          {
               map[i] = malloc(sizeof(int) * m);
          }
          return (map);
     }

- File: 6-O

### 7. Jump search

Write a function that searches for a value in a sorted array of integers using the Jump search algorithm

- **Prototype** : `int jump_search(int *array, size_t size, int value);`
- Where **array** is a pointer to the first element of the array to search in
- **size** is the number of elements in array
- And **value** is the value to search for
- Your function must return the first index where **value** is located
- You can assume that **array** will be sorted in ascending order
- If **value** is not present in **array** or if **array** is **NULL**, your function must return **-1**
- You have to use the square root of the size of the array as the jump step.
- You can use the **sqrt()** function included in **<math.h>** (don’t forget to compile with -lm)
- Every time you compare a value in the array to the value you are searching for, you have to print this value
- File: **100-jump.c**
