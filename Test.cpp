
  //std::std::vector<int> v = list.toVector();


  void Test::runTests()
  {
    std::cout << "===== RUN TESTS ===== \n \n";


    std::cout << "*** Test Constructor *** \n \n";
    test_listCreation();
    std::cout << '\n';

    std::cout << "*** Test isEmpty *** \n \n";
    test_isEmpty1();
    std::cout << '\n';
    test_isEmpty2();
    std::cout << '\n';
    test_isEmpty3();
    std::cout << '\n';
    test_isEmpty4();
    std::cout << '\n';

    std::cout << "*** Test size *** \n \n";
    test_size1();
    std::cout << '\n';
    test_size2();
    std::cout << '\n';
    test_size3();
    std::cout << '\n';
    test_size4();
    std::cout << '\n';
    test_size5();
    std::cout << '\n';
    test_size6();
    std::cout << '\n';
    test_size7();
    std::cout << '\n';

    std::cout << "*** Test addFront *** \n \n";
    test_addFront();
    std::cout << '\n';

    std::cout << "*** Test addBack *** \n \n";
    test_addBack();
    std::cout << '\n';

    std::cout << "*** Test removeFront *** \n \n";
    test_removeFront();
    std::cout << '\n';

    std::cout << "*** Test removeBack *** \n \n";
    test_removeBack();
    std::cout << '\n';

    std::cout << "===== TESTS COMPLETE ===== \n \n";
  }

  void Test::test_listCreation()
  {
    LinkedListOfInts list;
    std::vector<int> v = list.toVector();

    if(v.size() == 0)
    {
      std::cout << "Test constructor builds empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test constructor builds empty list: FAILED! \n";
    }
  }

  //test if list returns true for initial list
  void Test::test_isEmpty1()
  {
    LinkedListOfInts list;

    if(list.isEmpty())
    {
      std::cout << "Test isEmpty on empty unmodified list: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty on empty unmodified list: FAILED! \n";
    }
  }

  //test after adding elements
  //Using
  // add front
  // add back
  void Test::test_isEmpty2()
  {
    LinkedListOfInts listAddFront;
    LinkedListOfInts listAddBack;

    //test with addFront
    listAddFront.addFront(1);

    if(!listAddFront.isEmpty())
    {
      std::cout << "Test isEmpty after 1 call to addFront: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 1 call to addFront: FAILED! \n";
    }

    listAddFront.addFront(1);
    listAddFront.addFront(1);
    listAddFront.addFront(1);
    listAddFront.addFront(1);
    listAddFront.addFront(1);
    listAddFront.addFront(1);
    listAddFront.addFront(1);
    listAddFront.addFront(1);
    listAddFront.addFront(1);

    if(!listAddFront.isEmpty())
    {
      std::cout << "Test isEmpty after 10 calls to addFront: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 10 calls to addFront: FAILED! \n";
    }



    //test with add back

    listAddBack.addBack(1);

    if(!listAddBack.isEmpty())
    {
      std::cout << "Test isEmpty after 1 call to addBack: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 1 call to addBack: FAILED! \n";
    }

    listAddBack.addBack(1);
    listAddBack.addBack(1);
    listAddBack.addBack(1);
    listAddBack.addBack(1);
    listAddBack.addBack(1);
    listAddBack.addBack(1);
    listAddBack.addBack(1);
    listAddBack.addBack(1);
    listAddBack.addBack(1);
    listAddBack.addBack(1);

    if(!listAddBack.isEmpty())
    {
      std::cout << "Test isEmpty after 1 call to addBack: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 1 call to addBack: FAILED! \n";
    }

  }

  //test after deleteing elements
  //Using
  // delete front
  // delete back
  void Test::test_isEmpty3()
  {
    LinkedListOfInts listRemoveFront1;
    LinkedListOfInts listRemoveFront2;
    LinkedListOfInts listRemoveBack1;
    LinkedListOfInts listRemoveBack2;


    //test with add back
    //test with removeBack()
    listRemoveBack1.addBack(1);
    listRemoveBack1.removeBack();

    if(listRemoveBack1.isEmpty())
    {
      std::cout << "Test isEmpty after 1 call to addBack and 1 call to removeBack: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 1 call to addBack and 1 call to removeBack: FAILED! \n";
    }


    listRemoveBack2.addBack(1);
    listRemoveBack2.addBack(1);
    listRemoveBack2.addBack(1);
    listRemoveBack2.addBack(1);
    listRemoveBack2.addBack(1);
    listRemoveBack2.addBack(1);
    listRemoveBack2.addBack(1);
    listRemoveBack2.addBack(1);
    listRemoveBack2.addBack(1);
    listRemoveBack2.addBack(1);
    listRemoveBack2.removeBack();

    if(!listRemoveBack2.isEmpty())
    {
      std::cout << "Test isEmpty after 10 calls to addBack and 1 call to removeBack: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 10 calls to addBack and 1 call to removeBack: FAILED! \n";
    }

    listRemoveBack2.removeBack();
    listRemoveBack2.removeBack();
    listRemoveBack2.removeBack();
    listRemoveBack2.removeBack();
    listRemoveBack2.removeBack();
    listRemoveBack2.removeBack();
    listRemoveBack2.removeBack();
    listRemoveBack2.removeBack();
    listRemoveBack2.removeBack();

    if(listRemoveBack2.isEmpty())
    {
      std::cout << "Test isEmpty after 10 calls to addBack and 10 calls to removeBack: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 10 calls to addBack and 10 calls to removeBack: FAILED! \n";
    }

    //test with add back
    //test with removeFront()

    listRemoveFront1.addBack(1);
    listRemoveFront1.removeFront();

    if(listRemoveFront1.isEmpty())
    {
      std::cout << "Test isEmpty after 1 call to addBack and 1 call to removeFront: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 1 call to addBack and 1 call to removeFront: FAILED! \n";
    }


    listRemoveFront2.addBack(1);
    listRemoveFront2.addBack(1);
    listRemoveFront2.addBack(1);
    listRemoveFront2.addBack(1);
    listRemoveFront2.addBack(1);
    listRemoveFront2.addBack(1);
    listRemoveFront2.addBack(1);
    listRemoveFront2.addBack(1);
    listRemoveFront2.addBack(1);
    listRemoveFront2.addBack(1);
    listRemoveFront2.removeFront();

    if(!listRemoveBack2.isEmpty())
    {
      std::cout << "Test isEmpty after 10 calls to addBack and 1 call to removeFront: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 10 calls to addBack and 1 call to removeFront: FAILED! \n";
    }

    listRemoveFront2.removeFront();
    listRemoveFront2.removeFront();
    listRemoveFront2.removeFront();
    listRemoveFront2.removeFront();
    listRemoveFront2.removeFront();
    listRemoveFront2.removeFront();
    listRemoveFront2.removeFront();
    listRemoveFront2.removeFront();
    listRemoveFront2.removeFront();

    if(listRemoveFront2.isEmpty())
    {
      std::cout << "Test isEmpty after 10 calls to addBack and 10 calls to removeFront: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 10 calls to addBack and 10 calls to removeFront: FAILED! \n";
    }


  }

  //test after calling functions
  //Using
  // search()
  // size()
  void Test::test_isEmpty4()
  {
    LinkedListOfInts list1;
    LinkedListOfInts list2;
    LinkedListOfInts list3;

    //test Search
    list1.search(1);
    if(list1.isEmpty())
    {
      std::cout << "Test isEmpty after 1 call to search on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 1 call to search on empty list: FAILED! \n";
    }
    list1.search(1);
    list1.search(1);
    list1.search(1);
    if(list1.isEmpty())
    {
      std::cout << "Test isEmpty after 4 calls to search on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 4 calls to search on empty list: FAILED! \n";
    }

    list1.addBack(1);
    list1.search(1);
    if(!list1.isEmpty())
    {
      std::cout << "Test isEmpty after addBack and 1 call to search for added value: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after addBack and 1 call to search for added value: FAILED! \n";
    }

    //test Size
    list2.size();
    if(list2.isEmpty())
    {
      std::cout << "Test isEmpty after 1 call to size on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 1 call to size on empty list: FAILED! \n";
    }
    list2.size();
    list2.size();
    list2.size();
    if(list2.isEmpty())
    {
      std::cout << "Test isEmpty after 4 calls to size on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after 4 calls to size on empty list: FAILED! \n";
    }

    list2.addBack(1);
    list2.size();
    if(!list2.isEmpty())
    {
      std::cout << "Test isEmpty after addBack and 1 call to size: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty after addBack and 1 call to size: FAILED! \n";
    }

    //test return value

    if(list3.isEmpty()==true)
    {
      std::cout << "Test isEmpty returns bool true on empty list: PASSED!\n";
    }
    else if(list3.isEmpty()==false)
    {
      std::cout << "Test isEmpty returns bool true on empty list: FAILED! (returns false) \n";
    }
    else
    {
      std::cout << "Test isEmpty returns bool true on empty list: FAILED! (returns non boolean) \n";
    }

    list3.addBack(1);
    if(list3.isEmpty()==true)
    {
      std::cout << "Test isEmpty returns bool false on filled list: FAILED! (returns true) \n ";
    }
    else if(list3.isEmpty()==false)
    {
      std::cout << "Test isEmpty returns bool false on filled list: PASSED! \n";
    }
    else
    {
      std::cout << "Test isEmpty returns bool false on filled list: FAILED! (returns non boolean) \n";
    }

  }

  //check size initially returns on empty list
  void Test::test_size1()
  {
    LinkedListOfInts list;
    if(list.size()==0)
    {
      std::cout << "Test size on initial empty list: PASSED! \n";
    }
    else if(list.size()>0 || list.size() < 0)
    {
        std::cout << "Test size on initial empty list: FAILED! \n";
    }
    else
    {
        std::cout << "Test size on initial empty list: FAILED! (does not return int) \n";
    }
  }
  //Check addFront increments
  void Test::test_size2()
  {
    LinkedListOfInts list;

    list.addFront(1);
    if(list.size() == 1)
    {
        std::cout << "Test size after 1 call to addFront: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 1 call to addFront: FAILED! \n";
    }

    list.addFront(1);
    list.addFront(2);
    list.addFront(3);
    list.addFront(4);
    list.addFront(5);
    list.addFront(6);
    list.addFront(7);
    list.addFront(8);
    list.addFront(9);
    list.addFront(10);

    if(list.size() == 11)
    {
        std::cout << "Test size after 11 calls to addFront: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 11 calls to addFront: FAILED! \n";
    }

  }
  //Check that addback increments
  void Test::test_size3()
  {
    LinkedListOfInts list;

    list.addBack(1);
    if(list.size() == 1)
    {
        std::cout << "Test size after 1 call to addBack: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 1 call to addBack: FAILED! \n";
    }

    list.addBack(1);
    list.addBack(2);
    list.addBack(3);
    list.addBack(4);
    list.addBack(5);
    list.addBack(6);
    list.addBack(7);
    list.addBack(8);
    list.addBack(9);
    list.addBack(10);

    if(list.size() == 11)
    {
        std::cout << "Test size after 11 calls to addBack: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 11 calls to addBack: FAILED! \n";
    }
  }
  //Check deleteFront decrements
  void Test::test_size4()
  {
    LinkedListOfInts list1;
    LinkedListOfInts list2;
    LinkedListOfInts list3;

    list1.removeFront();
    if(list1.size() == 0)
    {
      std::cout << "Test size after 1 call to removeFront on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 1 call to removeFront on empty list: FAILED! \n";
    }

    list1.removeFront();
    list1.removeFront();
    list1.removeFront();
    list1.removeFront();
    list1.removeFront();
    list1.removeFront();
    list1.removeFront();
    list1.removeFront();
    list1.removeFront();
    list1.removeFront();

    if(list1.size() == 0)
    {
      std::cout << "Test size after 11 calls to removeFront on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 11 calls to removeFront on empty list: FAILED! \n";
    }

    list2.addBack(1);
    list2.removeFront();
    if(list2.size() == 0)
    {
      std::cout << "Test size after 1 call to removeFront on list with 1 element: PASSED! \n";
    }
    else
    {
        std::cout << "Test size after 1 call to removeFront on list with 1 element: FAILED! \n";
    }


    list3.addBack(1);
    list3.addBack(10);
    list3.addBack(100);
    list3.addBack(2);
    list3.addBack(3);
    list3.addBack(4);
    list3.addBack(5);
    list3.addBack(6);
    list3.addBack(7);
    list3.addBack(8);
    list3.addBack(9);
    list3.addBack(1);

    list3.removeFront();


    if(list3.size() == 11)
    {
      std::cout << "Test size after 1 call to removeFront on list with 12 element: PASSED! \n";
    }
    else
    {
        std::cout << "Test size after 1 call to removeFront on list with 12 element: FAILED! \n";
    }

    list3.removeFront();
    list3.removeFront();
    list3.removeFront();


    if(list3.size() == 8)
    {
      std::cout << "Test size after 4 calls to removeFront on list with 12 element: PASSED! \n";
    }
    else
    {
        std::cout << "Test size after 4 calls to removeFront on list with 12 element: FAILED! \n";
    }

  }
  //Check that deleteBack decrements
  void Test::test_size5()
  {
    LinkedListOfInts list1;
    LinkedListOfInts list2;
    LinkedListOfInts list3;

    list1.removeBack();
    if(list1.size() == 0)
    {
      std::cout << "Test size after 1 call to removeBack on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 1 call to removeBack on empty list: FAILED! \n";
    }

    list1.removeBack();
    list1.removeBack();
    list1.removeBack();
    list1.removeBack();
    list1.removeBack();
    list1.removeBack();
    list1.removeBack();
    list1.removeBack();
    list1.removeBack();
    list1.removeBack();

    if(list1.size() == 0)
    {
      std::cout << "Test size after 11 calls to removeBack on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 11 calls to removeBack on empty list: FAILED! \n";
    }

    list2.addBack(1);
    list2.removeBack();
    if(list2.size() == 0)
    {
      std::cout << "Test size after 1 call to removeBack on list with 1 element: PASSED! \n";
    }
    else
    {
        std::cout << "Test size after 1 call to removeBack on list with 1 element: FAILED! \n";
    }


    list3.addBack(1);
    list3.addBack(10);
    list3.addBack(100);
    list3.addBack(2);
    list3.addBack(3);
    list3.addBack(4);
    list3.addBack(5);
    list3.addBack(6);
    list3.addBack(7);
    list3.addBack(8);
    list3.addBack(9);
    list3.addBack(1);

    list3.removeBack();


    if(list3.size() == 11)
    {
      std::cout << "Test size after 1 call to removeBack on list with 12 element: PASSED! \n";
    }
    else
    {
        std::cout << "Test size after 1 call to removeBack on list with 12 element: FAILED! \n";
    }

    list3.removeBack();
    list3.removeBack();
    list3.removeBack();


    if(list3.size() == 8)
    {
      std::cout << "Test size after 4 calls to removeBack on list with 12 element: PASSED! \n";
    }
    else
    {
        std::cout << "Test size after 4 calls to removeBack on list with 12 element: FAILED! \n";
    }
  }
  //Check isEmpty does not modify size
  //
  void Test::test_size6()
  {
    LinkedListOfInts list;

    list.isEmpty();
    if(list.size() == 0)
    {
      std::cout << "Test size after 1 call to isEmpty on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 1 call to isEmpty on empty list: FAILED! \n";
    }

    list.isEmpty();
    list.isEmpty();
    list.isEmpty();
    list.isEmpty();
    if(list.size() == 0)
    {
      std::cout << "Test size after 5 calls to isEmpty on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 5 calls to isEmpty on empty list: FAILED! \n";
    }

    list.addBack(0);
    list.isEmpty();
    if(list.size() == 1)
    {
      std::cout << "Test size after 1 call to isEmpty on list with 1 element: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 1 call to isEmpty on list with 1 element: FAILED! \n";
    }


    list.addBack(0);
    list.addBack(1);
    list.addBack(101);
    list.addBack(567);
    list.addBack(4);
    list.addBack(3);
    list.addBack(19);
    list.addBack(25);
    list.isEmpty();

    if(list.size() == 9)
    {
      std::cout << "Test size after 1 call to isEmpty on list with 9 elements: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 1 call to isEmpty on list with 9 elements: FAILED! \n";
    }


  }
  //Check for search not to modify size
  void Test::test_size7()
  {
    LinkedListOfInts list;

    list.search(1);
    if(list.size() == 0)
    {
      std::cout << "Test size after 1 call to search on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 1 call to search on empty list: FAILED! \n";
    }

    list.search(0);
    list.search(1);
    list.search(2);
    list.search(3);
    if(list.size() == 0)
    {
      std::cout << "Test size after 5 calls to search on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 5 calls to search on empty list: FAILED! \n";
    }

    list.addBack(0);
    list.search(0);
    if(list.size() == 1)
    {
      std::cout << "Test size after 1 call to search on list with 1 element: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 1 call to search on list with 1 element: FAILED! \n";
    }


    list.addBack(0);
    list.addBack(1);
    list.addBack(101);
    list.addBack(567);
    list.addBack(4);
    list.addBack(3);
    list.addBack(19);
    list.addBack(25);
    list.search(567);

    if(list.size() == 9)
    {
      std::cout << "Test size after 1 call to search on list with 9 elements: PASSED! \n";
    }
    else
    {
      std::cout << "Test size after 1 call to search on list with 9 elements: FAILED! \n";
    }
  }


  //Check appropriate elements are added to the list
  void Test::test_addFront()
  {
    LinkedListOfInts list1;
    LinkedListOfInts list2;
    LinkedListOfInts list3;
    LinkedListOfInts list4;

    double testDouble = 10.5;
    list1.addFront(testDouble);
    std::vector<int> v1 = list1.toVector();

    if(v1.size() == 0)
    {
      std::cout << "Test addFront does not add double type input parameter: PASSED! \n";
    }
    else
    {
      std::cout << "Test addFront does not add double type input parameter: FAILED! \n";
    }

    char testChar = 'a';
    list4.addFront(testChar);
    std::vector<int> v4 = list4.toVector();

    if(v1.size() == 0)
    {
      std::cout << "Test addFront does not add char type input parameter: PASSED! \n";
    }
    else
    {
      std::cout << "Test addFront does not add char type input parameter: FAILED! \n";
    }

    list2.addFront(0);
    std::vector<int> v2 = list2.toVector();
    if(v2.size() == list2.size())
    {
        std::cout << "Test addFront size incrementing with 1 valid input parameter: PASSED! \n";
    }
    else
    {
      std::cout << "Test addFront size incrementing with 1 valid input parameter: FAILED! \n";
    }

    if(v2[0] == 0)
    {
      std::cout << "Test addFront adds correct value with 1 valid input parameter: PASSED! \n";
    }
    else
    {
      std::cout << "Test addFront adds correct value with 1 valid input parameter: FAILED! \n";
    }

    list3.addFront(0);
    list3.addFront(1);
    list3.addFront(100);
    list3.addFront(1000);
    list3.addFront(0);
    list3.addFront(0);
    list3.addFront(100);
    list3.addFront(0);
    list3.addFront(5);
    list3.addFront(6);
    list3.addFront(7);
    list3.addFront(8);
      int test3[] = {8, 7, 6, 5, 0, 100, 0, 0, 1000, 100, 1, 0};
      bool boolTest3 = true;

    std::vector<int> v3 = list3.toVector();
    if(v3.size() == list3.size())
    {
        std::cout << "Test addFront size incrementing with 12 valid input parameters: PASSED! \n";
    }
    else
    {
      std::cout << "Test addFront size incrementing with 12 valid input parameters: FAILED! \n";
    }

    for(int i = 0; i < list3.size(); i++)
    {
      if(v3[i] != test3[i])
      boolTest3 = false;
    }

    if(boolTest3)
    {
      std::cout << "Test addFront adds correct values with 12 valid input parameters: PASSED! \n";
    }
    else
    {
      std::cout << "Test addFront adds correct values with 12 valid input parameters: FAILED! \n";
    }

  }

  //Check appropriate elements are added to the list
  void Test::test_addBack()
  {
    LinkedListOfInts list1;
    LinkedListOfInts list2;
    LinkedListOfInts list3;
    LinkedListOfInts list4;

    double testDouble = 10.5;
    list1.addBack(testDouble);
    std::vector<int> v1 = list1.toVector();

    if(v1.size() == 0)
    {
      std::cout << "Test addBack with double type input parameter: PASSED! \n";
    }
    else
    {
      std::cout << "Test addBack with double type input parameter: FAILED! \n";
    }

    char testChar = 'a';
    list4.addFront(testChar);
    std::vector<int> v4 = list4.toVector();

    if(v1.size() == 0)
    {
      std::cout << "Test addFront does not add char type input parameter: PASSED! \n";
    }
    else
    {
      std::cout << "Test addFront does not add char type input parameter: FAILED! \n";
    }

    list2.addBack(10);
    std::vector<int> v2 = list2.toVector();
    if(v2.size() == list2.size())
    {
        std::cout << "Test addBack size incrementing with 1 valid input parameter: PASSED! \n";
    }
    else
    {
      std::cout << "Test addBack size incrementing with 1 valid input parameter: FAILED! \n";
    }

    if(v2[0] == 10)
    {
      std::cout << "Test addBack adds correct value with 1 valid input parameter: PASSED! \n";
    }
    else
    {
      std::cout << "Test addBack adds correct value with 1 valid input parameter: FAILED! \n";
    }

    list3.addBack(0);
    list3.addBack(1);
    list3.addBack(100);
    list3.addBack(1000);
    list3.addBack(0);
    list3.addBack(0);
    list3.addBack(100);
    list3.addBack(0);
    list3.addBack(5);
    list3.addBack(6);
    list3.addBack(7);
    list3.addBack(8);
      int test3[] = {0, 1, 100, 1000, 0, 0, 100, 0, 5, 6, 7, 8};
      bool boolTest3 = true;

    std::vector<int> v3 = list3.toVector();
    if(v3.size() == list3.size())
    {
        std::cout << "Test addBack size incrementing with 12 valid input parameters: PASSED! \n";
    }
    else
    {
      std::cout << "Test addBack size incrementing with 12 valid input parameters: FAILED! \n";
    }

    for(int i = 0; i < list3.size(); i++)
    {
      if(v3[i] != test3[i])
      boolTest3 = false;
    }

    if(boolTest3)
    {
      std::cout << "Test addBack adds correct values with 12 valid input parameters: PASSED! \n";
    }
    else
    {
      std::cout << "Test addBack adds correct values with 12 valid input parameters: FAILED! \n";
    }
  }

  //Check appropriate elements are removed from the list
  void Test::test_removeFront()
  {
    LinkedListOfInts list1;
    LinkedListOfInts list2;
    LinkedListOfInts list3;

    list1.removeFront();

    if(list1.size() == 0)
    {
      std::cout << "Test 1 call to removeFront doesnt modify size on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 1 call to removeFront doesnt modify size on empty list: FAILED! \n";
    }
    list1.removeFront();
    list1.removeFront();
    list1.removeFront();

    if(list1.size() == 0)
    {
      std::cout << "Test 4 calls to removeFront doesnt modify size on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 4 calls to removeFront doesnt modify size on empty list: FAILED! \n";
    }

    std::vector<int> v1 = list1.toVector();

    if(v1.size() == 0)
    {
      std::cout << "Test removeFront doesnt add elements: PASSED! \n";
    }
    else
    {
      std::cout << "Test removeFront doesnt add elements: FAILED! \n";
    }


    list2.addFront(0);
    list2.addFront(1);
    list2.addFront(100);
    list2.addFront(1000);
    list2.addFront(0);
    list2.addFront(0);
    list2.addFront(100);
    list2.addFront(0);
    list2.addFront(5);
    list2.addFront(6);
    list2.addFront(7);
    list2.addFront(8);
    int test2a[] = {7, 6, 5, 0, 100, 0, 0, 1000, 100, 1, 0};
    int test2b[] = {0, 100, 0, 0, 1000, 100, 1, 0};

    list2.removeFront();
    std::vector<int> v2a = list2.toVector();
    bool testBool2a = true;
    if(v2a.size() ==  11)
    {
      std::cout << "Test 1 call to removeFront removes elements from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 1 call to removeFront removes elements from populated list: FAILED! \n";
    }
    if(list2.size() ==  11)
    {
      std::cout << "Test 1 call to removeFront decrements size from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 1 call to removeFront decrements size from populated list: FAILED! \n";
    }

    for(int i=0; i< v2a.size(); i++)
    {
      if(v2a[i] != test2a[i])
        testBool2a = false;
    }
    if(testBool2a)
    {
      std::cout << "Test 1 call to removeFront modifies correct list element from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 1 call to removeFront modifies correct list element from populated list: FAILED! \n";
    }



    list2.removeFront();
    list2.removeFront();
    list2.removeFront();
    std::vector<int> v2b = list2.toVector();
    bool testBool2b = true;
    if(v2b.size() ==  8)
    {
      std::cout << "Test 4 calls to removeFront removes elements from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 4 calls to removeFront removes elements from populated list: FAILED! \n";
    }
    if(list2.size() ==  8)
    {
      std::cout << "Test 4 calls to removeFront decrements size from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 4 calls to removeFront decrements size from populated list: FAILED! \n";
    }

    for(int i=0; i< v2a.size(); i++)
    {
      if(v2b[i] != test2b[i])
        testBool2b = false;
    }
    if(testBool2b)
    {
      std::cout << "Test 4 calls to removeFront modifies correct list element from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 4 calls to removeFront modifies correct list element from populated list: FAILED! \n";
    }

    list2.removeFront();
    list2.removeFront();
    list2.removeFront();
    list2.removeFront();
    list2.removeFront();
    list2.removeFront();
    list2.removeFront();
    list2.removeFront();
    std::vector<int> v2c = list2.toVector();
    if(v2c.size() == 0)
    {
      std::cout << "Test removeFront on entire list removes all elements: PASSED! \n";
    }
    else
    {
      std::cout << "Test removeFront on entire list removes all elements: FAILED! \n";
    }

    if(list2.size() == 0)
    {
      std::cout << "Test removeFront on entire list decrements size: PASSED! \n";
    }
    else
    {
      std::cout << "Test removeFront on entire list decrements size: FAILED! \n";
    }


    if(list3.removeFront() == true || list3.removeFront() == false)
    {
      std::cout << "Test removeFront on empty list returns boolean: PASSED! \n";
    }
    else
    {
      std::cout << "Test removeFront on empty list returns boolean: PASSED! \n";
    }

    list3.addFront(1);
    if(list3.removeFront() == true || list3.removeFront() == false)
    {
      std::cout << "Test removeFront on list returns boolean: PASSED! \n";
    }
    else
    {
      std::cout << "Test removeFront on list returns boolean: FAILED! \n";
    }

  }
  //Check appropriate elements are removed the list
  void Test::test_removeBack()
  {
    LinkedListOfInts list1;
    LinkedListOfInts list2;
    LinkedListOfInts list3;

    list1.removeBack();

    if(list1.size() == 0)
    {
      std::cout << "Test 1 call to removeBack doesnt modify size on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 1 call to removeBack doesnt modify size on empty list: FAILED! \n";
    }
    list1.removeBack();
    list1.removeBack();
    list1.removeBack();

    if(list1.size() == 0)
    {
      std::cout << "Test 4 calls to removeBack doesnt modify size on empty list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 4 calls to removeBack doesnt modify size on empty list: FAILED! \n";
    }

    std::vector<int> v1 = list1.toVector();

    if(v1.size() == 0)
    {
      std::cout << "Test removeBack doesnt add elements: PASSED! \n";
    }
    else
    {
      std::cout << "Test removeBack doesnt add elements: FAILED! \n";
    }


    list2.addFront(5);
    list2.addFront(1);
    list2.addFront(100);
    list2.addFront(1000);
    list2.addFront(0);
    list2.addFront(0);
    list2.addFront(100);
    list2.addFront(0);
    list2.addFront(5);
    list2.addFront(6);
    list2.addFront(7);
    list2.addFront(8);
    int test2a[] = {8, 7, 6, 5, 0, 100, 0, 0, 1000, 100, 1};
    int test2b[] = {8, 7, 6, 5, 0, 100, 0, 0};

    list2.removeBack();
    std::vector<int> v2a = list2.toVector();
    bool testBool2a = true;
    if(v2a.size() ==  11)
    {
      std::cout << "Test 1 call to removeBack removes elements from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 1 call to removeBack removes elements from populated list: FAILED! \n";
    }
    if(list2.size() ==  11)
    {
      std::cout << "Test 1 call to removeBack decrements size from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 1 call to removeBack decrements size from populated list: FAILED! \n";
    }

    for(int i=0; i< v2a.size(); i++)
    {
      if(v2a[i] != test2a[i])
        testBool2a = false;
    }
    if(testBool2a)
    {
      std::cout << "Test 1 call to removeBack modifies correct list element from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 1 call to removeBack modifies correct list element from populated list: FAILED! \n";
    }



    list2.removeBack();
    list2.removeBack();
    list2.removeBack();
    std::vector<int> v2b = list2.toVector();
    bool testBool2b = true;
    if(v2b.size() ==  8)
    {
      std::cout << "Test 4 calls to removeBack removes elements from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 4 calls to removeBack removes elements from populated list: FAILED! \n";
    }
    if(list2.size() ==  8)
    {
      std::cout << "Test 4 calls to removeBack decrements size from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 4 calls to removeBack decrements size from populated list: FAILED! \n";
    }

    for(int i=0; i< v2a.size(); i++)
    {
      if(v2b[i] != test2b[i])
        testBool2b = false;
    }
    if(testBool2b)
    {
      std::cout << "Test 4 calls to removeBack modifies correct list element from populated list: PASSED! \n";
    }
    else
    {
      std::cout << "Test 4 calls to removeBack modifies correct list element from populated list: FAILED! \n";
    }

    list2.removeBack();
    list2.removeBack();
    list2.removeBack();
    list2.removeBack();
    list2.removeBack();
    list2.removeBack();
    list2.removeBack();
    list2.removeBack();
    std::vector<int> v2c = list2.toVector();
    if(v2c.size() == 0)
    {
      std::cout << "Test removeBack on entire list removes all elements: PASSED! \n";
    }
    else
    {
      std::cout << "Test removeBack on entire list removes all elements: FAILED! \n";
    }

    if(list2.size() == 0)
    {
      std::cout << "Test removeBack on entire list decrements size: PASSED! \n";
    }
    else
    {
      std::cout << "Test removeBack on entire list decrements size: FAILED! \n";
    }


    if(list3.removeBack() == true || list3.removeBack() == false)
    {
      std::cout << "Test removeBack on empty list returns boolean: PASSED! \n";
    }
    else
    {
      std::cout << "Test removeBack on empty list returns boolean: PASSED! \n";
    }

    list3.addFront(1);
    if(list3.removeBack() == true || list3.removeBack() == false)
    {
      std::cout << "Test removeBack on list returns boolean: PASSED! \n";
    }
    else
    {
      std::cout << "Test removeBack on list returns boolean: FAILED! \n";
    }
  }

  //Check search finds item
  //Using
  //addFront
  //addBack
  //removeFront
  //removeBack
  //isEmpty
  //size
  void Test::test_search()
  {

  }
