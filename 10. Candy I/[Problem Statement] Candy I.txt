						Candy I
	
Question:
	Jennifer is a teacher in the first year of a primary school. She has gone for a trip with her class today. She has taken a packet of 
	candies for each child. Unfortunatelly, the sizes of the packets are not the same.

	Jennifer is afraid that each child will want to have the biggest packet of candies and this will lead to quarrels or even 
	fights among children. She wants to avoid this. Therefore, she has decided to open all the packets, count the candies in each packet 
	and move some candies from bigger packets to smaller ones so that each packet will contain the same number of candies. The question is 
	how many candies she has to move.
	
	NOTE: In one `move` only one candy can be picked up from a packet and moved to another one.

	For each number `N` read by the program, `N` is the number of packets of candies, the program should continue to read until `N` is -1.
	For the next `N` lines, each line will contain a single integer `I` representing the number of candies in the packet `N[I]`. For every
	`N`, print a single line of output representing the minimum number of moves required to ensure equal number of candies.
	Print -1 if it is not possible to distribute the candies among all packets evenly.

Example:
	INPUT:
		5
		1
		1
		1
		1
		6
		2
		3
		4
		-1

	OUTPUT:
		4
		-1

	EXPLANATION:
		→ For the first case, there are 5 packets of candies, the candies present as [1, 1, 1, 1, 6]. To even out the number of candies, we can move
		one candy from the packet containing 6 candies to each of the other packets. This will leave 2 candies in each packet and cost us 4 moves.
		Thus, the answer will be 4.
		→ For the second case, there are 2 packets of candies, the candies are present as [3, 4]. These candies cannot be distributed evenly among 
		all packets. Thus, print -1 as output.