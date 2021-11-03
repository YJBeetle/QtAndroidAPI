#include "./SslErrorHandler.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	SslErrorHandler::SslErrorHandler(QAndroidJniObject obj) : android::os::Handler(obj) {}
	
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

