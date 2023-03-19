#pragma once

#include "Page2.g.h"

namespace winrt::AppTP2::implementation
{
    struct Page2 : Page2T<Page2>
    {
        Page2();

        int32_t MyProperty();
        void MyProperty(int32_t value);

    };
}

namespace winrt::AppTP2::factory_implementation
{
    struct Page2 : Page2T<Page2, implementation::Page2>
    {
    };
}
