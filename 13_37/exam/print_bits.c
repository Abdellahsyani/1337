/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 09:00:28 by asyani            #+#    #+#             */
/*   Updated: 2024/07/12 09:51:53 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void print_bits(unsigned char c) {
    unsigned char asciiValue = c;

    unsigned int binary[8];
    unsigned int index = 0;

    while (asciiValue > 0) 
	{
        binary[index] = asciiValue % 2;
        asciiValue /= 2;
        index++;
		printf("%d\n", ascciValue);
    }

    printf("Binary representation of %d: ", asciiValue);
    for (index - 1; index > 0; index--) {
        printf("%d", binary[index]);
    }
    printf("\n");
}

int main() {
    print_bits('A');
    return 0;
}

