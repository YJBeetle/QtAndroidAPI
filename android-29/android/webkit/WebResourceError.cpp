#include "./WebResourceError.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebResourceError::WebResourceError(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring WebResourceError::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint WebResourceError::getErrorCode()
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::webkit

