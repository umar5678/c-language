// 5. What will the following line produce in a C program : int a = 4;
// printf("%d %d %d \n", a, ++a, a++);

// The line `printf("%d %d %d \n", a, ++a, a++);
// ` in C invokes *undefined behavior *.This is because the order of evaluation of function arguments in C is unspecified.That means the compiler is free to evaluate the arguments in any order, which can result in unexpected behavior when the same variable is modified multiple times between sequence points.

//                                                                                                                                                                                                    Let’s break it down :

//     - `a` is initialized to `4`.- In `printf("%d %d %d \n", a, ++a, a++);`, the following expressions are being printed:
//   1. `a` - The current value of `a` (before any increments).
//   2. `++a` - This is a **pre-increment** operation, which increments `a` by 1 before using it in the expression.
//   3. `a++` - This is a **post-increment** operation, which uses the current value of `a` and increments it after it's used.

// However, since the order of evaluation of these arguments is unspecified, different compilers may evaluate these expressions in different orders, leading to unpredictable output. Some compilers might evaluate `++a` before `a`, or `a++` before `++a`, resulting in different results for the same code.

// ### Example possible outputs (depending on the compiler and environment):
// - **Output 1**: `6 6 4`
// - **Output 2**: `5 6 5`
// - **Output 3**: `4 5 6`

// ### Conclusion:
// The use of the same variable with both pre-increment and post-increment operations in the same `printf` statement leads to undefined behavior in C, and the output may vary across different platforms or compilers. It is best to avoid such code to ensure predictable behavior.