#include "./SslErrorHandler.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	SslErrorHandler::SslErrorHandler(QJniObject obj) : android::os::Handler(obj) {}
	
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

