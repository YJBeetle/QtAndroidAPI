#include "../../JString.hpp"
#include "./HttpAuthHandler.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	HttpAuthHandler::HttpAuthHandler(QJniObject obj) : android::os::Handler(obj) {}
	
	// Constructors
	
	// Methods
	void HttpAuthHandler::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void HttpAuthHandler::proceed(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"proceed",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jboolean HttpAuthHandler::useHttpAuthUsernamePassword() const
	{
		return callMethod<jboolean>(
			"useHttpAuthUsernamePassword",
			"()Z"
		);
	}
} // namespace android::webkit

