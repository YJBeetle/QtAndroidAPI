#include "../../JString.hpp"
#include "./WebResourceError.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	JString WebResourceError::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint WebResourceError::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::webkit

