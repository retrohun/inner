## MOLP problems

The MOLP problems presented here arose during the investigation of the
entropy region of four random variables. In some of the problems the
main challenge is on the scalar LP solver, and the running time is
essentially determined by the speed of the LP solver. Other problems,
especially those with more than 12 objectives, use negligible time
for solving the underlying scalar LP problems. The total time is
consumed by the vertex enumeration part, which is very sensitive to
the order in which the extremal vertices appear. Different runs of the
same problem provide different vertex order, and difference in the
running time can be tenfold, or even more. Solutions reported in the
`solution` directory generated the extremal vertices in the order
they are shown.

All results were generated by `inner` using the following
parameterization:

    inner --PrintParams=1 --PrintVertices=0 --RandomFacet=1 -y- -o NAME.res NAME.vlp > NAME.out

