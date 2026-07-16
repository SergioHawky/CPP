/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seilkiv <seilkiv@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:38:55 by seilkiv           #+#    #+#             */
/*   Updated: 2026/07/16 08:46:22 by seilkiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "../inc/Cat.hpp"
#include "WrongCat.hpp"
#include "../inc/Dog.hpp"

int main()
{
    std::cout << "-- Animal test --" << std::endl;
    {
        // Animal a;
        // Animal *a = new Animal();

        std::cout << "(Animal a; and new Animal() would not compile - uncomment to check)" << std::endl;
    }
	
    std::cout << std::endl << "-- Array test --" << std::endl;
    {
        Animal* animals[4];
        animals[0] = new Dog();
        animals[1] = new Cat();
        animals[2] = new Dog();
        animals[3] = new Cat();

        for (int i = 0; i < 4; i++)
            animals[i]->makeSound();

        for (int i = 0; i < 4; i++)
            delete animals[i];
    }

    std::cout << std::endl << "-- Deep copy test (Dog) --" << std::endl;
    {
        Dog original;
        original.getBrain()->setIdea(0, "original idea");

        Dog copy(original);

        copy.getBrain()->setIdea(0, "modified idea");

        std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
        std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;

        if (original.getBrain() != copy.getBrain())
            std::cout << "OK: brains have different addresses (deep copy)" << std::endl;
        else
            std::cout << "FAIL: same brain address (shallow copy!)" << std::endl;
    }

    std::cout << std::endl << "-- Deep copy test via operator= (Cat) --" << std::endl;
    {
        Cat a;
        Cat b;

        a.getBrain()->setIdea(0, "cat a idea");
        b.getBrain()->setIdea(0, "cat b idea");

        b = a;

        b.getBrain()->setIdea(1, "only in b");

        std::cout << "Cat a idea[0]: " << a.getBrain()->getIdea(0) << std::endl;
        std::cout << "Cat b idea[0]: " << b.getBrain()->getIdea(0) << std::endl;
        std::cout << "Cat a idea[1]: " << a.getBrain()->getIdea(1) << std::endl;
        std::cout << "Cat b idea[1]: " << b.getBrain()->getIdea(1) << std::endl;

        if (a.getBrain() != b.getBrain())
            std::cout << "OK: brains have different addresses (deep copy)" << std::endl;
        else
            std::cout << "FAIL: same brain address (shallow copy!)" << std::endl;
    }

    return 0;
}
