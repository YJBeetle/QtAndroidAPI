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
	WindowManager_BadTokenException::WindowManager_BadTokenException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowManager$BadTokenException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::view

