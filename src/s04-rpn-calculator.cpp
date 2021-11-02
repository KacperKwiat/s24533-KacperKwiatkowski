#include <iostream>
#include <string>
#include <vector>
std::vector<std::string> create_vector(int const argc, char* argv[])
{
    std::vector <std::string> vector_to_create;

    for (int i = 0; i < argc; i++) {
        vector_to_create.push_back(std::string(argv[i]));
    }
    return vector_to_create;
}
int main(int argc, char*argv[]) 
{
	auto main_vector = create_vector(argc, argv);
	int num1;
	int num2;
	
	
    num1 = std::stoi(argv[1]);
    
    num2 = std::stoi(argv[2]);

    for (int i = 1; i < argc-1; i = i + 1) 
    {

        switch (argv[argc-1])
        {
            case '+':
                std::cout<< (num1+num2);
                break;
            case '-':
                std::cout<< (num1+num2);
                break;
            case '*':
				std::cout<< (num1+num2);
                break;
            case '/':
                std::cout<< (num1+num2);
                break;
            default:
                break;
        }
    }
    return (0);
}
		
