A) Read Input
B) Search Square for each map
	a. Generate int grid
	b. Search from map(0,0) if a 2x2 is empty and save as best possible (Best).
		b1. If empty, test x+1 and y+1. If empty, save as Best. Repeat until fail.
		b2. Test if edge is closer than Best len.
			b21. If no, test map (1,1). Repeat until fail.
			b22. If yes, jump to map(0+len(Best),0). Iterate.
		b3. Exit if edgest are closer than len(Best).


C) Print output