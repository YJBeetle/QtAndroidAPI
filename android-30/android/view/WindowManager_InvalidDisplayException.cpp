#include "./WindowManager_InvalidDisplayException.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException()
		: java::lang::RuntimeException(
			"android.view.WindowManager$InvalidDisplayException",
			"()V"
		) {}
	WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException(jstring arg0)
		: java::lang::RuntimeException(
			"android.view.WindowManager$InvalidDisplayException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::view

