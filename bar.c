Write a function with the following prototype

                    float * twice(float arrayname[], int n);
The parameters of the function are the name of an array (arrayname) and the size of the array (n).

The function extends the size of the array to 2n. You MUST use Dynamic memory allocation

 Initialize the array elements with values 1, 2, 3, 4,  … 2n

 The function should return arrayname.

 DO NOT print anything inside the function.

 For example, if we call the function from main as follows

  float *arr = calloc(4, sizeof(float));

  arr = twice(arr,4);

  for (int i = 0; i < 8; i++)

          printf("%0.1f\t", *(arr + i));

 The output will be

  1.0     2.0     3.0     4.0     5.0     6.0     7.0     8.0


