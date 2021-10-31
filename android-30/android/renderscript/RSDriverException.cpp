#include "./RSDriverException.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	RSDriverException::RSDriverException(QAndroidJniObject obj) : android::renderscript::RSRuntimeException(obj) {}
	
	// Constructors
	RSDriverException::RSDriverException(jstring arg0)
		: android::renderscript::RSRuntimeException(
			"android.renderscript.RSDriverException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::renderscript

