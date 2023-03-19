#include "pch.h"
#include <winrt/Windows.UI.Xaml.Interop.h>
#include <microsoft.ui.xaml.window.h>
#include <winrt/Microsoft.UI.Xaml.Media.h>
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Navigation;
using namespace Microsoft::UI::Xaml::Media::Animation;
using namespace Microsoft::UI::Xaml::Controls;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::AppTP2::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();

        auto windowNative{ this->try_as<::IWindowNative>() };
        HWND hWnd{ 0 };
        windowNative->get_WindowHandle(&hWnd);
        SetWindowPos(hWnd, NULL, 235, 20, 1450, 990, NULL);
        this->Title(L"Page Transition �ǽ�");

        ContentFrame1().Navigate(xaml_typename<Page1>());
        ContentFrame2().Navigate(xaml_typename<Page1>());
        ContentFrame3().Navigate(xaml_typename<Page1>());
        ContentFrame4().Navigate(xaml_typename<Page1>());
        ContentFrame5().Navigate(xaml_typename<Page1>());
        ContentFrame6().Navigate(xaml_typename<Page1>());
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

   
}


void winrt::AppTP2::implementation::MainWindow::Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (flag1)
    {
        ContentFrame1().Navigate(xaml_typename<Page2>());
        flag1 = false;
    }
    else
    {
        ContentFrame1().Navigate(xaml_typename<Page1>());
        flag1 = true;
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_1(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (ContentFrame1().BackStackDepth() > 0)
    {
        ContentFrame1().GoBack();
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_2(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (flag2)
    {
        ContentFrame2().Navigate(xaml_typename<Page2>());
        flag2 = false;
    }
    else
    {
        ContentFrame2().Navigate(xaml_typename<Page1>());
        flag2 = true;
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_3(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (ContentFrame2().BackStackDepth() > 0)
    {
        ContentFrame2().GoBack();
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_4(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (flag3)
    {
        ContentFrame3().Navigate(xaml_typename<Page2>());
        flag3 = false;
    }
    else
    {
        ContentFrame3().Navigate(xaml_typename<Page1>());
        flag3 = true;
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_5(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (ContentFrame3().BackStackDepth() > 0)
    {
        ContentFrame3().GoBack();
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_6(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (flag4)
    {
        ContentFrame4().Navigate(xaml_typename<Page2>());
        flag4 = false;
    }
    else
    {
        ContentFrame4().Navigate(xaml_typename<Page1>());
        flag4 = true;
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_7(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (ContentFrame4().BackStackDepth() > 0)
    {
        ContentFrame4().GoBack();
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_8(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (flag5)
    {
        ContentFrame5().Navigate(xaml_typename<Page2>());
        flag5 = false;
    }
    else
    {
        ContentFrame5().Navigate(xaml_typename<Page1>());
        flag5 = true;
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_9(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (ContentFrame5().BackStackDepth() > 0)
    {
        ContentFrame5().GoBack();
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_10(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (flag6)
    {
        ContentFrame6().Navigate(xaml_typename<Page2>());
        flag6 = false;
    }
    else
    {
        ContentFrame6().Navigate(xaml_typename<Page1>());
        flag6 = true;
    }
}


void winrt::AppTP2::implementation::MainWindow::Button_Click_11(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    if (ContentFrame6().BackStackDepth() > 0)
    {
        ContentFrame6().GoBack();
    }
}
