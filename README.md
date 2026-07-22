# QtAndroidAPI

[![Test](https://github.com/YJBeetle/QtAndroidAPI/actions/workflows/Test-Qt6.yaml/badge.svg?branch=Qt6)](https://github.com/YJBeetle/QtAndroidAPI/actions/workflows/Test-Qt6.yaml)

## What can do

This is a library for easily calling Android methods in Qt.

To display a Toast in traditional Qt, you need the following code:

    QJniObject javaString = QJniObject::fromString("Message");
    QJniObject toast = QJniObject::callStaticObjectMethod("android/widget/Toast", "makeText",
                                                          "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
                                                          QNativeInterface::QAndroidApplication::context().object(),
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
        GIT_TAG origin/Qt6
        SOURCE_SUBDIR android-31
    )
    FetchContent_MakeAvailable(androidapi)

And add the link library after your target

    target_link_libraries(${PROJECT_NAME} PRIVATE QtAndroidAPI)

## Convenient Type Conversions

This library provides seamless implicit and explicit conversions between Qt data types and Java JNI types:

- **String**: `QString` $\leftrightarrow$ `JString` (Implicit conversion supported, or via `.toString()`)
- **Byte Array**: `QByteArray` $\leftrightarrow$ `JByteArray` (Implicit conversion supported, or via `.toByteArray()`)
- **String List**: `QStringList` $\leftrightarrow$ `JObjectArray` (Implicit conversion supported, or via `.toStringList()`)
- **Integer List**: `QList<int>` $\leftrightarrow$ `JIntArray` (Implicit conversion supported, or via `.toQList()`)
- **Type Downcasting**: Easily cast base objects to derived classes via `obj.as<T>()` (e.g. `CONTEXT.as<Activity>()`).

```cpp
// String & ByteArray
QString msg = "Hello Qt";
Toast::makeText(CONTEXT, msg, 0).show(); // Auto converts to JString

QByteArray data = "binary data";
JByteArray jBytes = data;     // Auto converts to JByteArray
QByteArray recvData = jBytes; // Auto converts back to QByteArray

// Permissions / String Array
QStringList permissions = {"android.permission.CAMERA", "android.permission.READ_EXTERNAL_STORAGE"};
JObjectArray jPermissions = permissions; // Auto converts to Java String[]

// Downcasting
auto activity = CONTEXT.as<android::app::Activity>();
```
