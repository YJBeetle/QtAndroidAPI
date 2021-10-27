#include "./WebResourceError.hpp"

namespace android::webkit
{
	// Fields
	
	WebResourceError::WebResourceError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring WebResourceError::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint WebResourceError::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::webkit

