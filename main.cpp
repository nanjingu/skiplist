#include <iostream>
#include "skiplist.h"
#define FILE_PATH "storefile"

int main()
{
    SkipList<int, std::string> skiplist(6);
    skiplist.insert_element(10000, "hhhhh");
    skiplist.insert_element(10001, "zzzzz");
    skiplist.insert_element(10004, "esdcf");
    skiplist.insert_element(10044, "asdfg");

    std::cout << "skiplist size: " << skiplist.size() << std::endl;

    skiplist.upload_data();

    skiplist.search_element(10001);

    skiplist.display();

    skiplist.delete_element(10000);
    skiplist.delete_element(10001);

    std::cout << "skiplist size: " << skiplist.size() << std::endl;
    skiplist.search_element(10001);
    skiplist.display();
}
