#include "./SslErrorHandler.hpp"

namespace android::webkit
{
	// Fields
	
	SslErrorHandler::SslErrorHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void SslErrorHandler::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void SslErrorHandler::proceed()
	{
		__thiz.callMethod<void>(
			"proceed",
			"()V"
		);
	}
} // namespace android::webkit

