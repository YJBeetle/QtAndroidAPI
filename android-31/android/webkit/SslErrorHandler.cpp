#include "./SslErrorHandler.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	SslErrorHandler::SslErrorHandler(QAndroidJniObject obj) : android::os::Handler(obj) {}
	
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

