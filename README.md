# QtAndroidAPI

## 这个项目可以做什么

这是一个为方便在Qt中调用Android方法的库。

在传统Qt中若要显示一个Toast需要编写以下代码:
```
QJniObject javaString = QJniObject::fromString("Message");
QJniObject toast = QJniObject::callStaticObjectMethod("android/widget/Toast", "makeText",
                                                      "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
                                                      QNativeInterface::QAndroidApplication::context().object(),
                                                      javaString.object(),
                                                      jint(0));
toast.callMethod<void>("show");
```

而使用本库只需要编写如下代码：
```
#include "JString.hpp"
#include <android/content/Context.hpp>
#include "android/widget/Toast.hpp"
using android::content::Context;
using android::widget::Toast;
auto toast = Toast::makeText(Context(QtAndroid::androidContext()),
                             QStringLiteral("Message"),
                             0);
toast.show();
```
