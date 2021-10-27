#include "./HttpAuthHandler.hpp"

namespace android::webkit
{
	// Fields
	
	HttpAuthHandler::HttpAuthHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void HttpAuthHandler::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void HttpAuthHandler::proceed(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"proceed",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void HttpAuthHandler::proceed(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"proceed",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean HttpAuthHandler::useHttpAuthUsernamePassword()
	{
		return __thiz.callMethod<jboolean>(
			"useHttpAuthUsernamePassword",
			"()Z"
		);
	}
} // namespace android::webkit

