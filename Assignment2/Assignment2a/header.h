//Uljana Alexejewa st129990@student.spbu.ru


#ifndef HEADER_H
#define HEADER_H

namespace Assignment2a
{
    /* А почему у вас много кто использует uintmax_t? Мне кажется, в этом есть опасность. 
     * На разных машинах, я полагаю, у этого типа может быть разный размер, поэтому в некоторых
     * случаях это может привести к ошибкам. std::size_t конвертируется в любой нужный тип и может
     * принимать максимальные теоретические значения. */
    /* Еще молодец, что разбила на файлы. Но чуть-чуть перестаралась. Я думаю, преобразования массива
     * в файл и обратно стоило определять в одном исходнике */
    std::pair<char*, uintmax_t> file_to_array(const std::string& path);
    void reverse_array(char* const buffer, const uintmax_t size);
    void array_to_file(char* const buffer, const uintmax_t size);
}


#endif // HEADER_H
