/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfoo <qfoo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 15:14:11 by qfoo              #+#    #+#             */
/*   Updated: 2025/08/24 19:00:21 by qfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. linked list
// 2. checker
// 3. instructions (s, p , r)
// 4. sorting algo

// main function: 
// argc argv, store in linked list

int main(int argc, char **argv)
{
	if (argc >= 2) //not ./program only
	{
		// check
		// store para into stack A
		// run pushswap fx
	}
	//no parameters = return to prompt without displaying anything
	return (0);
}

// checkings: 
// arg are int (valid arg) -> isdigit
// can be one string instead of numbers too
// check dupe (cant have same number in stack)
// check intmax & intmin

//need to check within string "1 2 3" and wihtout string "1" "2" "3"
int	check_valid(int argc, char **argv)
{
	int	i;
	int j;
	
	if (argc < 1)
	{
		write(2, "Error\n", 6); // set fd to 2 cuz subject say display on standard error
		exit(1); // terminate with error
	}
	// check dupe
	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == argv[i][j + 1])
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

int	check_dup()
{
	
}

// turk sort:
// push first 2 nodes first
// push first cheapest (least instructions) node found to stack B
// stack B = descending, pushed number shld be max or min of stack B
// push to b until left 3 in stack A
// check number position to push to A
// in stack A make max of everything at the top, or ascending order, then push B to A
// 		since biggest num in stack B will be first,
// 		maybe check last node in stack A after sorting is bigger than biggest of B or not
// check for numbers below max in A
// make sure min at the top

// circular doubly linked list:
// no null (last node points to the first)
// can point to next and prev node

// hard code for 2-5

// 100% benchmark:
// 3 -> 2
// 5 -> 12
// 100 -> 700
// 500 -> 5500
