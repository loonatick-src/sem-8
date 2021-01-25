# Lecture 5 (Jan 25)
LU requires O(n^3) FLOPs

## LU decomposition with partial pivoting
What was the condition for A to admit LU decomposition? A must have
all leading principal minors non-zero. Remember that LU decomposibility
has stronger conditions than just invertibility.

So, what if A is invertible, but not LU decomposible? So, we could
have a matrix where $a{kk}^{(k-1)}$ would be non-zero. So, we choose
the first row where an entry in the same column is non-zero and 
perform a row exchange elementary transformation.

So, in the middle of the process of LU decomposition, we would have
the matrix A(k) = E3.E2.E1.A principle submatrices up to a44(3)
bring upper triangular, but a44(3) is 0. So, we proceed by multiplying
a row-permutation matrix. P.E3.E2.E1.A = P.A(3), and then continue
like you normally would without partial pivoting, until another zero
pivot is encountered.

Once we're done with all the partial pivoting, it may so happen that
the matrix formed by the product of the permutations and the elementary
operation matrices might not even have a lower triangular inverse.
There goes your LU decomposition. What do now?

Perhaps we should take a closer look at the permutation matrices.
You know that they're just the corresponding identity matrices with
rows permuted. Note that there can also be composite swaps, i.e.
permutations that cannot be acheived by a single swap. So, the basic
permutation matrices do not form closed groups, i.e. the single swap
matrices do not form a closed group. Do not confuse this with the
permutation group from group theory.

Other properties of the single swap permutators (???)
- Orthogonal
- Idempodent

Recall that when we were able to do LU decomposition without a hitch,
the diagonal of the matrix of elementary operations had a unit diagonal.
So, performing a row exchange would place one of those 1s in the
upper triangular part of the matrix, which was supposed to be all
0s. But, we could do some hacks. We had left multiplied by P(3,5).
We can, in addition to that, right multiply by P(3,5), which does
 a column interchange. So we did a P.E'.Ptranspose.A. So, basically
 we have performed an unitary transformation.

 It turns out that P.E2.E1.A = A(2) => E2'.E1'.P.A = A(2). Doing this
whole business is equivalent to just premultiplying with the permutation
matrix to begin with before starting with the elementary row operations.

HW: Write a pseudocode to carry out LU decomposition with partial
pivoting. Do this by Friday pls thx

## Matrix computatoins in the presence of errors
Computer is a finite precision machine. And that's not the only
source of error in real life. I mean, if you're modelling a system
as a set of linear equations, then the parameters are never exactly
known, now are they?

So, your Ax = b is more like (A + dA)x = (b + db), where only statistical
information is available about dA and db. So, we get a solution x+dx,
where we report some single value x and the statistics of dx.

Try imagining this for a system of say 2 variables, where the solution
of a linear system is a plane. Try imagining how different types of
solutions are affected how much by small perturbations in the
parameters. It'll turn out to be wildly varying. So, we need to
be good at quantifying upper bounds on such errors.

