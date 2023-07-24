# QtAndroidAPI

[![Test](https://github.com/YJBeetle/QtAndroidAPI/actions/workflows/Test-Qt5.yaml/badge.svg?branch=Qt5)](https://github.com/YJBeetle/QtAndroidAPI/actions/workflows/Test-Qt5.yaml)

## What can do

This is a library for easily calling Android methods in Qt.

To display a Toast in traditional Qt, you need the following code:

    QAndroidJniObject javaString = QAndroidJniObject::fromString("Message");
    QAndroidJniObject toast = QAndroidJniObject::callStaticObjectMethod("android/widget/Toast", "makeText",
                                                                        "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
                                                                        QtAndroid::androidContext().object(),
                                                                        javaString.object(),
                                                                        jint(0));
    toast.callMethod<void>("show");

When using this library, just:

    #define QT_ANDROID_API_AUTOUSE
    #include <AndroidContext>
    #include <android/widget/Toast>
    auto toast = Toast::makeText(CONTEXT, QStringLiteral("Message"), 0);
    toast.show();

## How to use

Add the following to your CMake:

    include(FetchContent)
    FetchContent_Declare(androidapi
        GIT_REPOSITORY https://github.com/YJBeetle/QtAndroidAPI.git
        GIT_TAG origin/Qt5
        SOURCE_SUBDIR android-31
    )
    FetchContent_MakeAvailable(androidapi)

And add the link library after your target

    target_link_libraries(${PROJECT_NAME} PRIVATE QtAndroidAPI)
