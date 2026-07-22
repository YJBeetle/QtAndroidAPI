# QtAndroidAPI

[![Test](https://github.com/YJBeetle/QtAndroidAPI/actions/workflows/Test-Qt6.yaml/badge.svg?branch=Qt6)](https://github.com/YJBeetle/QtAndroidAPI/actions/workflows/Test-Qt6.yaml)

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

    #define QT_ANDROID_API_AUTOUSE
    #include <AndroidContext>
    #include <android/widget/Toast>
    auto toast = Toast::makeText(CONTEXT, QStringLiteral("Message"), 0);
    toast.show();

## 如何使用

在你的CMake中添加以下：

    include(FetchContent)
    FetchContent_Declare(androidapi
        GIT_REPOSITORY https://github.com/YJBeetle/QtAndroidAPI.git
        GIT_TAG origin/Qt6
        SOURCE_SUBDIR android-31
    )
    FetchContent_MakeAvailable(androidapi)

并且在你的Target之后添加链接库

    target_link_libraries(${PROJECT_NAME} PRIVATE QtAndroidAPI)

## 便捷类型转换支持

本库内置了 Qt 常用数据类型与 Java/Android JNI 类型之间的隐式及便捷转换：

- **字符串**: `QString` $\leftrightarrow$ `JString` (支持隐式转换，或通过 `.toString()`)
- **字节数组**: `QByteArray` $\leftrightarrow$ `JByteArray` (支持隐式转换，或通过 `.toByteArray()`)
- **字符串列表**: `QStringList` $\leftrightarrow$ `JObjectArray` (支持隐式转换，或通过 `.toStringList()`)
- **数值列表**: `QList<int>` $\leftrightarrow$ `JIntArray` (支持隐式转换，或通过 `.toQList()`)
- **类型向下强转**: 通过 `obj.as<T>()`（如 `CONTEXT.as<Activity>()`）方便地将基类转换为派生类类型。

```cpp
// 字符串与字节数组
QString msg = "Hello Qt";
Toast::makeText(CONTEXT, msg, 0).show(); // 自动转 JString

QByteArray data = "binary data";
JByteArray jBytes = data;     // 自动转 JByteArray
QByteArray recvData = jBytes; // 自动转 QByteArray

// 权限/字符串数组
QStringList permissions = {"android.permission.CAMERA", "android.permission.READ_EXTERNAL_STORAGE"};
JObjectArray jPermissions = permissions; // 自动转 Java String[]

// 类型转换
auto activity = CONTEXT.as<android::app::Activity>();
```
