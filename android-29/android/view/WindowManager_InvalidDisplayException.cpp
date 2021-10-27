#include "./WindowManager_InvalidDisplayException.hpp"

namespace android::view
{
	// Fields
	
	WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException()
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$InvalidDisplayException",
			"()V"
		);
	}
	WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$InvalidDisplayException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$InvalidDisplayException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::view

