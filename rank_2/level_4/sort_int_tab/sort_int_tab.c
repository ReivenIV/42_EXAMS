void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	temp;

	while (i < (size - 1)) // without the size-1 you will have an infinit loop. 
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}


//-------------------------------------------
// 			:: test it dear !! ::
//-------------------------------------------

// // #include <stdio.h>
// // void print_array(int *tab, unsigned int size) {
// // 	for (unsigned int i = 0; i < size; i++) {
// // 		printf("%d ", tab[i]);
// // 	}
// // 	printf("\n");
// // }

// // int main() {
// // 	int tab1[] = {5, 3, 4, 1, 2};
// // 	unsigned int size1 = 5;
// // 	printf("Original array: ");
// // 	print_array(tab1, size1);
// // 	sort_int_tab(tab1, size1);
// // 	printf("Sorted array: ");
// // 	print_array(tab1, size1);
// // 	printf("\n");


// // 	int tab2[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
// // 	unsigned int size2 = 10;
// // 	printf("Original array: ");
// // 	print_array(tab2, size2);
// // 	sort_int_tab(tab2, size2);
// // 	printf("Sorted array: ");
// // 	print_array(tab2, size2);
// // 	printf("\n");

// // 	int tab3[] = {1, 2, 3, 4, 5};
// // 	unsigned int size3 = 5;
// // 	printf("Original array: ");
// // 	print_array(tab3, size3);
// // 	sort_int_tab(tab3, size3);
// // 	printf("Sorted array: ");
// // 	print_array(tab3, size3);
// // 	printf("\n");

// // 	int tab4[] = {5};
// // 	unsigned int size4 = 1;
// // 	printf("Original array: ");
// // 	print_array(tab4, size4);
// // 	sort_int_tab(tab4, size4);
// // 	printf("Sorted array: ");
// // 	print_array(tab4, size4);

// // 	return 0;
// // }