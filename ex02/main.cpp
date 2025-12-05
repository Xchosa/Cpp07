
#include <iostream>
#include "Array.hpp"


//#define MAX_VAL 750
//int main(int, char**)
//{
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//    }
//    //SCOPE
//    {
//        Array<int> tmp = numbers;
//        Array<int> test(tmp);
//    }

//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[MAX_VAL] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }

//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        numbers[i] = rand();
//    }
//    delete [] mirror;//
//    return 0;
//}



int main(int, char **)
{
	std::cout << "=== TEST 1: Default Constructor (empty array) ===" << std::endl;
	Array<double> emptyArray;
	std::cout << "emptyArray Size: " << emptyArray.size() << std::endl;


	std::cout << "=== TEST 2: Constructor with size ===" << std::endl;
	Array<float> floatArray(10);  
	try{
	    for(int i = 0; i < 12; i++)
    	{
            std::cout << i <<". " << floatArray[i] << "| ";
        }
    }
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl; 
	}

	std::cout << "=== Array with [] operator ===" << std::endl;
	try{
		for(int i = 0; i < 12; i++)
		{
			floatArray[i] = i * 1.25 + 1;
		}
	}
		catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl; 
	}
	
	try{
	    for(int i = 0; i < 12; i++)
    	{
            std::cout << i <<". " << floatArray[i] << "| ";
        }
    }
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl; 
	}
    //int * a = new int();then display*a
}
