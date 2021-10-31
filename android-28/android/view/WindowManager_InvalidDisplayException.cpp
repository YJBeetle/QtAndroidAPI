#include "./WindowManager_InvalidDisplayException.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
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

