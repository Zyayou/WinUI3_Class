#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Add1::implementation
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

    using namespace std;
    void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        double ca, cb, cc;
        ca = stod(a().Text().c_str());
        cb = stod(b().Text().c_str());
        cc = ca + cb;

        c().Text(to_wstring(cc));
    }
}
