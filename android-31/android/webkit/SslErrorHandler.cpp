#include "./SslErrorHandler.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	void SslErrorHandler::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void SslErrorHandler::proceed() const
	{
		callMethod<void>(
			"proceed",
			"()V"
		);
	}
} // namespace android::webkit

