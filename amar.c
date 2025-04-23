typedef struct {

            float x;

            float y;

} Point;

  The structure is used to store the coordinates of a point. Write a function to find the Euclidean distance between two points. The formula to find the Euclidean distance between the points
(
�
1
,
�
1
)
(x
1
​
 ,y
1
​
 )  and
(
�
2
,
�
2
)
(x
2
​
 ,y
2
​
 ) is given by
(
�
2
−
�
1
)
2
+
(
�
2
−
�
1
)
2
(x
2
​
 −x
1
​
 )
2
 +(y
2
​
 −y
1
​
 )
2

​


The function prototype is

 float calculateDistance(Point p1, Point p2);

The above function must return the Euclidean distance between two points p1 and p2

2 points
12345678910
// Do not write the main function here

#include <math.h>

typedef struct {
    float x;
    float y;
} Point;


12.
Question 12
Write a function to check if two string are anagrams.

An anagram is a  word or phrase formed by rearranging the letters of a different word or  phrase. For example, the words “bear” and “bare”, “debit card” and “bad  credit” are anagrams.

The function prototype is

  int IsAnagram(char *str1, char *str2);

The functions returns 1 if str1 and str2 are anagrams else 0.



