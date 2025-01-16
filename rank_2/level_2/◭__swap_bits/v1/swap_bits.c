/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:22:26 by rita              #+#    #+#             */
/*   Updated: 2025/01/16 15:35:56 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// source ::: me with GPT4o

#include <unistd.h>

unsigned char swap_bits(unsigned char octet)
{
    // Shift the bits to the right by 4 positions
    unsigned char right_shifted = octet >> 4;
    
    // Shift the bits to the left by 4 positions
    unsigned char left_shifted = octet << 4;
    
    // Combine the results using the OR operator
    unsigned char res = right_shifted | left_shifted;
    
    // Return the result
    return res;
}

/*
exemple : 
    octet = 178;                        // 1011-0010 in binary

    right_shifted = octet >> 4;         // 0000-1011 in binary
    left_shifted = octet << 4;          // 0010-0000 in binary

    res = right_shifted | left_shifted; // 0010-1011 in binary
*/