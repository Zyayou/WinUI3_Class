#pragma once

#include "Page1.g.h"

namespace winrt::AppTP2::implementation
{
    struct Page1 : Page1T<Page1>
    {
        Page1();

        int32_t MyProperty();
        void MyProperty(int32_t value);

    };
}

namespace winrt::AppTP2::factory_implementation
{
    struct Page1 : Page1T<Page1, implementation::Page1>
    {
    };
}
