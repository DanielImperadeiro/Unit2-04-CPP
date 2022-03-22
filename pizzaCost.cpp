// Copyright (c) 2022 Daniel Imperadeiro All rights reserved.
// Created by: Daniel Imperadeiro
// Created on: March. 22, 2022
// This program displays the cost of a pizza

#include <iostream>
#include <cmath>


int main() {
  const float HST = 0.13;
  int diameter;
  float sub_total;
  float tax;
  float total;

  std::cout << "What diameter do you want your pizza in inches?\n";
  std::cin >> diameter;
  sub_total = 2 + 2.25 + (1.5 * diameter);
  tax = sub_total * HST;
  total = sub_total + tax;
  total = (round(total * 100))/100;
  std::cout << "Your pizza will cost $" << total << ".\n";
}
