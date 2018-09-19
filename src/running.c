

#include <stdio.h>
void main()
{
	int L, i, j, n; //L is the length of the interval, n is the number of intervals, and i and j are loop variables.
	bool trees[10001]; // Simulate the existence of a tree with a boolean array.
	for(i = 0; i < 10001; i++) // Assign initial value.
		trees[i] = true;
	scanf("%d%d",&L,&n);
	for(i = 0; i < n; i++){
		int begin, end; // Use begin, end to store the start and end of the interval.
		scanf("%d%d", &begin, &end);
		for(j = begin; j <= end; j++) // Move the tree in the interval, that is, assign it to false.
			trees[j] = false;
	}
	int count = 0; //Count with count and count the number of remaining trees.
	for(i = 0; i <= L; i++)
		if(trees[i]) count ++;
	printf("%d\n", count);
}
