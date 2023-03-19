#pragma once

#include "Page.g.h"

namespace winrt::AppTP2::implementation
{
    struct Page : PageT<Page>
    {
        Page();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::AppTP2::factory_implementation
{
    struct Page : PageT<Page, implementation::Page>
    {
    };
}
