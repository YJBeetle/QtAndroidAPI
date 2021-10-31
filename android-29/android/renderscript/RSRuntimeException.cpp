#include "./RSRuntimeException.hpp"

namespace android::renderscript
{
	// Fields
	
	RSRuntimeException::RSRuntimeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSRuntimeException::RSRuntimeException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSRuntimeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::renderscript

