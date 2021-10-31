#include "./RSInvalidStateException.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	RSInvalidStateException::RSInvalidStateException(QAndroidJniObject obj) : android::renderscript::RSRuntimeException(obj) {}
	
	// Constructors
	RSInvalidStateException::RSInvalidStateException(jstring arg0)
		: android::renderscript::RSRuntimeException(
			"android.renderscript.RSInvalidStateException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::renderscript

