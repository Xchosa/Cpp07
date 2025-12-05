
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


#define MAX_VAL 750
int main(int, char **)
{
	std::cout << "=== TEST 1: Default Constructor (empty array) ===" << std::endl;
	Array<double> emptyArray;
	std::cout << "emptyArray Size: " << emptyArray.size() << std::endl;


	std::cout << "=== TEST 2: Constructor with size ===" << std::endl;
	Array<float> floatArray(10); 
	for(int i = 0; i < 10; i++)
		{
			floatArray.printValue(floatArray[i]);
		}
	std::cout << "===  Array with [] operator ===" << std::endl;
	try{
		for(int i = 0; i < 10; i++)
		{
			floatArray[i] = i * 1.25 + 1;
			floatArray.printValue(floatArray[i]);
		}
	}
		catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl; 
	}

	const Array<float> constfloatArray(10); 

	std::cout << "value of floatArray pos 4" << std::endl;
	floatArray.printValue(floatArray[4]);
	
	std::cout << "===  Proof of changed FloatArray values ===" << std::endl;
	try{
	    for(int i = 0; i < 10; i++)
    	{
            std::cout << i <<". " << floatArray[i] << "| ";
        }
    }
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl; 
	}

    Array<int> numbers(MAX_VAL);
	try{
		for(int i = 0; i < 12; i++)
		{
			std::cout << i <<". " << numbers[i] << "| ";
		}
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl; 
	}



    int* mirror = new int[MAX_VAL];
	for (int i = 0 ; i < MAX_VAL; i++)
	{
		mirror[i] = i + 0.5;
	}
	std::cout << std::endl;
	std::cout << "=== Displaying mirror array ===" << std::endl;
	std::cout << "number Size: " <<numbers.size() << std::endl;

	
	for (int i = 1; i <= 20; i++)
	{
		std::cout << mirror[i] << " ";
		if (i % 10 == 0)
			std::cout << std::endl;
	}
	std::cout << std::endl;
	delete [] mirror;
}

/// still leaks !!!!!!!!!!