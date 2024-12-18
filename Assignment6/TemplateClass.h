//Алексеева Ульяна st129990@student.spbu.ru
#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H

#include <vector>

template <typename T>
class TemplateClass {
public:
    TemplateClass(T* obj, int num, const std::vector<float>& vec)
        : obj_(obj), num_(num), vec_(vec) {}

    bool foo()
    {
        return obj_->bar(num_, vec_);
    }

private:
    T* obj_;
    int num_;
    std::vector<float> vec_;
};

template <>
class TemplateClass<int> {
public:
    TemplateClass(int*, int, const std::vector<float>&) {}

    bool foo()
    {
        return true;
    }
};

template <>
class TemplateClass<double> {
public:
    TemplateClass(double*, int, const std::vector<float>&) {}

    bool foo()
    {
        return false;
    }
};

#endif // TEMPLATECLASS_H

