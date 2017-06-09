#pragma once


//функция для вывода сообщений
void print_message(std::string msg)
{
    std::cout << msg << std::endl;
    system("pause");
}

//перевод Int в String
std::string int_to_str(int num)
{
    std::stringstream ss;
    ss << num;
    return ss.str();
}

//функция получения number в диапазоне [min, max]
void get_num(int min, int max, int& number) 
{
    std::string choice = "";
    try {
        std::getline(std::cin, choice);
        number = std::stoi(choice);
        if ((number < min) || (number > max))
        {
            print_message("Choose number from " + int_to_str(min) + " to " + int_to_str(max) + "!");
        }
    }
    catch (std::invalid_argument e)
    {
        print_message("Numbers only!");
    }
    catch (std::out_of_range e)
    {
        print_message("Out of type range!");
    }
}

void print_menu_main()
{
	system("cls");
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Main menu:" << std::endl;
	std::cout << " 1. Input" << std::endl;
	std::cout << " 2. Output" << std::endl;
	std::cout << " 3. Search" << std::endl;
	std::cout << " 4. Add" << std::endl;
	std::cout << " 5. Subset" << std::endl;
	std::cout << " 0. Exit" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Enter the command: ";
}

void print_menu_console_or_file()
{
	std::cout << "-------------------------------------" << std::endl;
	std::cout << " 1. Console" << std::endl;
	std::cout << " 2. File" << std::endl;
	std::cout << " 0. Go back" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Enter the command: ";
}

void print_menu_search_params()
{
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Search by:" << std::endl;
	std::cout << " 1. Teacher" << std::endl;
	std::cout << " 2. Group" << std::endl;
	std::cout << " 3. Term paper" << std::endl;
	std::cout << " 4. Type of control" << std::endl;
	std::cout << " 0. Go back" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Enter the command: ";
}

void print_menu_search_type()
{
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Search:" << std::endl;
	std::cout << " 1. Simple search" << std::endl;
	std::cout << " 2. Binary search" << std::endl;
	std::cout << " 0. Go back" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Enter the command: ";
}

void print_menu_record_action()
{
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Action with record:" << std::endl;
	std::cout << " 1. Print" << std::endl;
	std::cout << " 2. Change" << std::endl;
	std::cout << " 3. Delete" << std::endl;
	std::cout << " 0.Go back" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Enter the command: ";
}

std::string input_file_name()
{
	std::string name;
	std::cout << "Enter file name: ";
	std::getline(std::cin, name);
	//std::getline(std::cin, name);
	if (name == "") name = "default_file_name";
	return name + ".txt";
}