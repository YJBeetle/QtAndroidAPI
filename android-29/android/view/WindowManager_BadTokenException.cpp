#include "./WindowManager_BadTokenException.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	WindowManager_BadTokenException::WindowManager_BadTokenException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	WindowManager_BadTokenException::WindowManager_BadTokenException()
		: java::lang::RuntimeException(
			"android.view.WindowManager$BadTokenException",
			"()V"
		) {}
	WindowManager_BadTokenException::WindowManager_BadTokenException(jstring arg0)
		: java::lang::RuntimeException(
			"android.view.WindowManager$BadTokenException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::view

