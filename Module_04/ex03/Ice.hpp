/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:02:38 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/25 16:30:38 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

    public:
        Ice();
        ~Ice();

        Ice( Ice const & );
        Ice& operator=( Ice const & );

        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif // ICE_HPP