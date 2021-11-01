# QtAndroidAPI

这是一个为方便在Qt中调用android方法的头文件库。

在过去，在Qt的中若要显示一个Toast需要编写以下代码:
```
QAndroidJniObject javaString = QAndroidJniObject::fromString("Message");
QAndroidJniObject toast = QAndroidJniObject::callStaticObjectMethod("android/widget/Toast", "makeText",
                                                                    "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
                                                                    QtAndroid::androidContext().object(),
                                                                    javaString.object(),
                                                                    jint(0));
toast.callMethod<void>("show");
```

而现在你只需要
```
#include "android/widget/Toast.hpp"
using android::widget::Toast;
using android::content::Context;
auto toast = Toast::makeText(Context(QtAndroid::androidContext()),
                             QAndroidJniObject::fromString("Message").object(),
                             0);
toast.show();
```
