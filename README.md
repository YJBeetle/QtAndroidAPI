# QtAndroidAPI

[![Build](https://github.com/YJBeetle/QtAndroidAPI/actions/workflows/Build-Qt6.yaml/badge.svg?branch=Qt6Dev)](https://github.com/YJBeetle/QtAndroidAPI/actions/workflows/Build-Qt6.yaml)

## 这个项目可以做什么

这是一个为方便在Qt中调用Android方法的库。

在传统Qt中若要显示一个Toast需要编写以下代码:

    QJniObject javaString = QJniObject::fromString("Message");
    QJniObject toast = QJniObject::callStaticObjectMethod("android/widget/Toast", "makeText",
                                                          "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
                                                          QNativeInterface::QAndroidApplication::context().object(),
                                                          javaString.object(),
                                                          jint(0));
    toast.callMethod<void>("show");

而使用本库时只需这么写：

    #include "JString.hpp"
    #include <android/content/Context.hpp>
    #include "android/widget/Toast.hpp"
    using android::content::Context;
    using android::widget::Toast;
    auto toast = Toast::makeText(Context(QtAndroid::androidContext()),
                                 QStringLiteral("Message"),
                                 0);
    toast.show();

## 如何使用

在你的CMake中添加以下：

    include(FetchContent)
    FetchContent_Declare(androidapi URL https://github.com/YJBeetle/QtAndroidAPI/releases/download/auto-build-Qt6Dev-???????/Qt6Dev-android-??-*.tar.gz)
    FetchContent_MakeAvailable(androidapi)

并且在你的Target之后添加链接库

    target_link_libraries(${PROJECT_NAME} PRIVATE QtAndroidAPI)

如果因为各种原因无法使用预编译，你可以改从源代码构建：

    FetchContent_Declare(androidapi
        GIT_REPOSITORY https://github.com/YJBeetle/QtAndroidAPI.git
        GIT_TAG origin/Qt6Dev
        SOURCE_SUBDIR android-??
    )
