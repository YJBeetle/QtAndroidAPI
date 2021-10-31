#include "./SslErrorHandler.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	SslErrorHandler::SslErrorHandler(QJniObject obj) : android::os::Handler(obj) {}
	
	// Constructors
	
	// Methods
	void SslErrorHandler::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void SslErrorHandler::proceed()
	{
		callMethod<void>(
			"proceed",
			"()V"
		);
	}
} // namespace android::webkit

