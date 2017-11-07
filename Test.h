/**
*	@file Test.h
*	@author: Brandon Lammey
*	@date: 6 November 2017
*	@brief Header file for Test.cpp
* Tests fucntions of a LinkedListOfInts
* Assumes toVector() is correctly implemented
*/

#ifndef TEST_H
#define TEST_H


#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"

class Test
{
public:
  void runTests();

  //test if contructor creates empty list using toVector
  void test_listCreation();

  //test if list returns true for initial list
  void test_isEmpty1();

  //test after adding elements
  //Using
  // add front
  // add back
  void test_isEmpty2();

  //test after deleting elements
  //Using
  // delete front
  // delete back
  // returns bool
  void test_isEmpty3();

  //test after calling functions
  //Using
  // search()
  // size()
  void test_isEmpty4();

  //Check size on initial empty list
  void test_size1();
  //Check addFront increments
  void test_size2();
  //Check that addback increments
  void test_size3();
  //Check deleteFront decrements
  void test_size4();
  //Check that deleteBack decrements
  void test_size5();
  //Check isEmpty does not modify size
  void test_size6();
  //Check for search not to modify size
  void test_size7();


  //Check appropriate elements are added to the list
  void test_addFront();

  //Check appropriate elements are added to the list
  void test_addBack();

  //Check appropriate elements are removed from the list
  void test_removeFront();
  //Check appropriate elements are removed the list
  void test_removeBack();

  //Check search returns
  //true when item is in list
  //false when item is not in list
  void test_search();

};


#endif
