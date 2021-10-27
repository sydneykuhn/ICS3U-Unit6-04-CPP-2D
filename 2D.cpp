// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program finds the average of a 2D array

#include <iostream>
#include <random>
#include <array>

template <int rows, int columns>
int averageOfNumbers(int (&passedIn2DList)[rows][columns]) {
    // This program finds the average of a 2D array

    int average = 0;
    int total = 0;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < columns; ++columnElement)
            total += passedIn2DList[rowElement][columnElement];
    }

    average = total / (rows * columns);

    return average;
}


int main() {
    // this function uses a 2D array
    int average;
    int randomNumber;
    const int rows = 3;
    const int columns = 5;
    int a2DArray[rows][columns];
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 50);  // [1, 100]

    // input, process & output
    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            randomNumber = idist(rgen);
            a2DArray[rowElement][columnElement] = randomNumber;
            std::cout << randomNumber << ", ";
        }
        std::cout << std::endl;
    } average = averageOfNumbers(a2DArray);
    std::cout << "\nThe average of all the numbers is : " << average
        << std::endl;

    std::cout << "\nDone." << std::endl;
}
