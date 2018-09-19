Problem Description  
  
There is a row of trees on the road with a length L outside the gate of a school. The interval between each two adjacent trees is 1 meter. weYou can think of the road as a number axis, one end of the road is at the position of the number axis 0, and the other end is at the position of L;The integer points, 0, 1, 2, ..., L, all have a tree.Because there are some areas on the road to be used to build the subway. These regions are represented by their starting and ending points on the number axis. HasIt is known that the coordinates of the start point and the end point of any region are integers, and there may be coincident portions between the regions. I want to put these nowThe trees in the area (including the two trees at the end of the area) are removed. Your task is to calculate the road after removing these trees.How many trees are there.

Input data  
The first line of the input has two integers L (1 <= L <= 10000) and M (1 <= M <= 100), where L represents the road.The length, M represents the number of regions, and L and M are separated by a space. The next M lines contain two lines per line.The same integer, separated by a space, represents the coordinates of the start and end points of a region.
  
Output requirements  
The output consists of a line containing only one integer representing the number of trees remaining on the road.

Inpur sample  
500 3  
150 300  
100 200   
470 471  

Output sample  
298  

Problem solving  
This problem can be summarized as entering a large integer closed interval, and some that may overlap each other within the large interval.Small integer closed interval. Remove these small integer closed intervals in large integer closed intervals, and the remaining may be discontinuous after the questionHow many integers are in the integer range? The scope given by this topic is a large interval between 1 and 10000, which is to be removed.The number of intervals is less than 100. Because of the small size, you can consider using space for time, using a large array Simulate these intervals, and each number in the array represents a number on the interval. For example, if the length of the input L is 500, then According to the title, there are initially 501 trees. We will use an array of 501 elements to simulate the 501 tree, under the array. The markers represent trees from 1 to 501, and the value of the array element represents whether the tree was taken away. Initially these trees have not been moved Go, so the values ​​of all array elements are represented by true. Whenever a cell is entered, this interval is corresponding. The tree is completely removed, that is, the value of the element indicated by the subscript element corresponding to the interval is set to false. If there are multiple districtsCorresponding to the same array element, it will cause an array element to be set to false multiple times. But this does not affect the positive result Authenticity. When all cell-to-cell input is complete, we can count the number of remaining elements that are still true.Get the number of trees left last. Of course, if the initial input range is not 500, then we use the array size.Not 500. Since the upper limit given by the title is 10000, we can define a number that is 10001 elements in size.
Group, this is enough for all inputs.  

Common problems in implementation  
Question 1: The array is not big enough, causing the array to be out of bounds, and some people open the array into trees[10000];  
Question 2: The array trees are not initialized, taking it for granted that it will be automatically initialized to 0;  
Question 3: Some people use the interval combination method to merge the cells that want to remove the tree first, but the merge algorithm is unclear;  
Question 4: There is no equal sign on the boundary of the cycle, and a few trees;  
Question 5: The number of trees with a number of people removed, then use L to reduce it, but forget to add one.  


