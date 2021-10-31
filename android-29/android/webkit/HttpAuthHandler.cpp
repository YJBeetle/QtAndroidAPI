#include "./HttpAuthHandler.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	HttpAuthHandler::HttpAuthHandler(QAndroidJniObject obj) : android::os::Handler(obj) {}
	
	// Constructors
	
	// Methods
	void HttpAuthHandler::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void HttpAuthHandler::proceed(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"proceed",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jboolean HttpAuthHandler::useHttpAuthUsernamePassword()
	{
		return callMethod<jboolean>(
			"useHttpAuthUsernamePassword",
			"()Z"
		);
	}
} // namespace android::webkit

