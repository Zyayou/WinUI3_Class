#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace std;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Quiz1::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
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


void winrt::Quiz1::implementation::MainWindow::sum_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double ca, cb, cc;
    ca = stod(a().Text().c_str());
    cb = stod(b().Text().c_str());
    cc = ca + cb;

    c().Text(to_wstring(cc));
}


void winrt::Quiz1::implementation::MainWindow::sub_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double ca, cb, cc;
    ca = stod(a().Text().c_str());
    cb = stod(b().Text().c_str());
    cc = ca - cb;

    c().Text(to_wstring(cc));
}


void winrt::Quiz1::implementation::MainWindow::m_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double ca, cb, cc;
    ca = stod(a().Text().c_str());
    cb = stod(b().Text().c_str());
    cc = ca * cb;

    c().Text(to_wstring(cc));
}


void winrt::Quiz1::implementation::MainWindow::d_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double ca, cb, cc;
    ca = stod(a().Text().c_str());
    cb = stod(b().Text().c_str());
    cc = ca / cb;

    c().Text(to_wstring(cc));
}
