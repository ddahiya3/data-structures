/**
 * @file allocator.h
 * Declaration of the Allocator class.
 */

#pragma once

#include <iostream>

#include "letter.h"
#include "room.h"

/**
 * An allocator object to wrap the allocation of last-name letter groups
 * to rooms.
 */
class Allocator
{
  public:
    /**
     * Creates an Allocator object based on a list of students and a
     *  list of rooms.
     * @param studentFile Path to roster file
     * @param roomFile Path to room list file
     */
    Allocator(const std::string& studentFile, const std::string& roomFile);

    /**
     * Allocator copy constructor.
     * @param other The allocator to copy into this room.
     */
    Allocator(const Allocator& other); 

    /**
     * Allocator assignment operator.
     * @param other The allocator to make a copy of
     * @return A reference to the copied Room
     */
    Allocator& operator=(const Allocator& other);

    /**
     * Allocator destructor.
     */
    ~Allocator();

    /**
     * Calls the solving routine to allocate student letter
     *  groups to rooms.
     */
    void allocate();

    /**
     * Prints each letter and how many students there are for each one.
     *
     * @param stream Where to print the results to
     */
    void printStudents(std::ostream & stream = std::cout);

    /**
     * Prints the room allocation determined by this Allocator.
     *
     * @param stream Where to print the results to
     */
    void printRooms(std::ostream & stream = std::cout);

  private:
    /**
     * Creates the array of letters.
     */
    void createLetterGroups();

    /**
     * Reads the students from the students file and places them in
     *  their letter groups.
     * @param file The file to read the student list from
     */
    void loadStudents(const std::string& file);

    /**
     * Reads rooms from the rooms file and sets their capacities.
     * @param file The file to read the room list from
     */
    void loadRooms(const std::string& file);


    /**
     * Runs the algorithm on the set of rooms and students.
     */
    int solve();

    /**
     * Return the room with the largest number of open seasts
     */
    Room* largestOpening();

    /**
     * Destructor/assignment operator clear helper function.
     */
    void clear();

    /**
     * Cctor/assignment operator copy helper function.
     */
    void copy(const Allocator& other);

    /**
     * Returns the amount of seats remaining in the room with the
     *  fewest spare seats.
     */
    int minSpaceRemaining();

    /** Array of all letters (size 26) */
    Letter* alpha;

    /** Array of all rooms */
    Room* rooms;

    /** Size of the rooms array */
    int roomCount;

    /** Total number of students */
    int studentCount;

    /** Total number of available seats across all rooms */
    int totalCapacity;
};
