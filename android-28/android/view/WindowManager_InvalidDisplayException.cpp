#include "../../JString.hpp"
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
	WindowManager_InvalidDisplayException::WindowManager_InvalidDisplayException(JString arg0)
		: java::lang::RuntimeException(
			"android.view.WindowManager$InvalidDisplayException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view

