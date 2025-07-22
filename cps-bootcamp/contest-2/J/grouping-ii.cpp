/**
 * Grouping 2
 * Problem Statement
 * There are N students in a school.
 * We will divide these students into some groups, and in each group they will discuss some themes.
 * You think that groups consisting of two or less students cannot have an effective discussion, so you want to have as many groups consisting of three or more students as possible.
 * Divide the students so that the number of groups consisting of three or more students is maximized.
 * 
 */

#include <stdio.h>


int main()
{

	int totalStudent, maxGroup =0;

	scanf("%d", &totalStudent);

	if(totalStudent < 3) {
		maxGroup = 0;
	}
	else {
		maxGroup = totalStudent / 3;
	}
	printf("%d\n", maxGroup);
	return 0;
}