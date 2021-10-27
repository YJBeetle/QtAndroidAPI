#include "./UnsupportedCallbackException.hpp"

namespace javax::security::auth::callback
{
	// Fields
	
	UnsupportedCallbackException::UnsupportedCallbackException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsupportedCallbackException::UnsupportedCallbackException(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.callback.UnsupportedCallbackException",
			"(Ljavax/security/auth/callback/Callback;)V",
			arg0.__jniObject().object()
		);
	}
	UnsupportedCallbackException::UnsupportedCallbackException(__JniBaseClass &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.callback.UnsupportedCallbackException",
			"(Ljavax/security/auth/callback/Callback;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	UnsupportedCallbackException::UnsupportedCallbackException(__JniBaseClass &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.callback.UnsupportedCallbackException",
			"(Ljavax/security/auth/callback/Callback;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject UnsupportedCallbackException::getCallback()
	{
		return __thiz.callObjectMethod(
			"getCallback",
			"()Ljavax/security/auth/callback/Callback;"
		);
	}
} // namespace javax::security::auth::callback

