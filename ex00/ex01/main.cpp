#include "phonebook.class.hpp"

void    show_book(PhoneBook book[], int len)
{
    std::string contact[3];

    std::cout << "\033[32;1m_____________________________________________\033[0m" << std::endl;
    std::cout << "\033[32;1m|  index   |first name| last name| nickname |\033[0m" << std::endl;
    std::cout << "\033[32;1m_____________________________________________\033[0m" << std::endl;
    for (int i = 0; i < len; i++)
    {
        contact[0] = book[i].get_firstName();
        if (contact[0].length() > 10)
        {
            contact[0].resize(9);
            contact[0] = contact[0] + ".";
        }
        contact[1] = book[i].get_lastName();
        if (contact[1].length() > 10)
        {
            contact[1].resize(9);
            contact[1] = contact[1] + ".";
        }
        contact[2] = book[i].get_nickName();
        if (contact[2].length() > 10)
        {
            contact[2].resize(9);
            contact[2] = contact[2] + ".";
        }
        std::cout << "|" << std::setw(10) << (i + 1) << "|" << std::setw(10) << contact[0] << "|" << std::setw(10) <<  contact[1] << "|" << std::setw(10) << contact[2] << "|" << std::endl;
    }
    std::cout << "\033[32;1;4m_____________________________________________\033[0m" << std::endl;
    while(true && !(std::cin.eof()))
    {
        int i;
        std::cout << "\033[96;1;4mChoose number of contact\033[0m" << std::endl;
        getline(std::cin, contact[0]);
        if (only_digits(contact[0]))
        {
            i = atoi(contact[0].c_str());
            if (i > 0 && i < (len + 1))
                book[i - 1].writeContact();
            else
                std::cout << "\033[1;31mWrong number\033[0m" << std::endl;
        }
        else if (contact[0] == "EXIT")
            return;
        else
            std::cout << "\033[1;31mWrong command\033[0m" << std::endl;
    }
}

int     main(int argc, char **argv)
{
    PhoneBook book[8];
    std::string	input;
    int i;

    i = 0;
    std::cout << "\033[32;1;4mThis is My Awesome PhoneBook\033[0m" << std::endl;
    std::cout << "Please, run one of the following commands:" << std::endl;
    std::cout << "\033[94;1mADD, SEARCH, EXIT\033[0m" << std::endl;
    while(true)
    {
        std::cout << "your command is:";
        getline(std::cin, input);
        // if ( == true)
        //     break;

        if((input == "EXIT") || std::cin.eof())
        {
            std::cout << "Thank you for choosing my program!" << std::endl;
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        else if(input == "ADD")
        {
            if (i < 8)
                book[i++].add_contact();
            else
                std::cout << "Sorry! Your PhoneBook is full!" << std::endl;

        }
        else if(input == "SEARCH")
        {
            show_book(book, i);
        }
        else
        {
            std::cout << "\033[31;1mWrong command. Be accurate.\033[0m" << std::endl;
        }
    }
    return (0);
}