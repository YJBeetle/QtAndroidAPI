#include "./RSInvalidStateException.hpp"

namespace android::renderscript
{
	// Fields
	
	RSInvalidStateException::RSInvalidStateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSInvalidStateException::RSInvalidStateException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSInvalidStateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::renderscript

