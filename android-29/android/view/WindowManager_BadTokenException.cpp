#include "./WindowManager_BadTokenException.hpp"

namespace android::view
{
	// Fields
	
	WindowManager_BadTokenException::WindowManager_BadTokenException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WindowManager_BadTokenException::WindowManager_BadTokenException()
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$BadTokenException",
			"()V"
		);
	}
	WindowManager_BadTokenException::WindowManager_BadTokenException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$BadTokenException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	WindowManager_BadTokenException::WindowManager_BadTokenException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$BadTokenException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::view

