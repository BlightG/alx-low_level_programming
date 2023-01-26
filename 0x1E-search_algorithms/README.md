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
