#include "./PasswordCallback.hpp"

namespace javax::security::auth::callback
{
	// Fields
	
	PasswordCallback::PasswordCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PasswordCallback::PasswordCallback(jstring &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.callback.PasswordCallback",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	PasswordCallback::PasswordCallback(const QString &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.callback.PasswordCallback",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	void PasswordCallback::clearPassword()
	{
		__thiz.callMethod<void>(
			"clearPassword",
			"()V"
		);
	}
	jcharArray PasswordCallback::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jstring PasswordCallback::getPrompt()
	{
		return __thiz.callObjectMethod(
			"getPrompt",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean PasswordCallback::isEchoOn()
	{
		return __thiz.callMethod<jboolean>(
			"isEchoOn",
			"()Z"
		);
	}
	void PasswordCallback::setPassword(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"([C)V",
			arg0
		);
	}
} // namespace javax::security::auth::callback

