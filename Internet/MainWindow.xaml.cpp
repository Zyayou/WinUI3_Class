﻿#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App3::implementation
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


void winrt::App3::implementation::MainWindow::MenuFlyoutItem_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    url_text().PasteFromClipboard();
}


void winrt::App3::implementation::MainWindow::get_button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    winrt::hstring sss = url_text().Text();


    try
    {
        if (sss.size() == 0)
        {
            MessageBox(NULL, L"url에 내용을 입력해 주세요.", L"url비어있음", MB_OK);
            return;
        }

        winrt::Windows::Foundation::Uri uri(url_text().Text());
        MyWebView().Source(uri);
    }
    catch (winrt::hresult_error const& e)
    {
        winrt::hstring err = e.message();

        MessageBox(NULL, err.c_str(), L"error", MB_OK);
    }
}
