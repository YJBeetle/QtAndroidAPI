#include "./PasswordCallback.hpp"

namespace javax::security::auth::callback
{
	// Fields
	
	// QJniObject forward
	PasswordCallback::PasswordCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PasswordCallback::PasswordCallback(jstring arg0, jboolean arg1)
		: JObject(
			"javax.security.auth.callback.PasswordCallback",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void PasswordCallback::clearPassword()
	{
		callMethod<void>(
			"clearPassword",
			"()V"
		);
	}
	jcharArray PasswordCallback::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jstring PasswordCallback::getPrompt()
	{
		return callObjectMethod(
			"getPrompt",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean PasswordCallback::isEchoOn()
	{
		return callMethod<jboolean>(
			"isEchoOn",
			"()Z"
		);
	}
	void PasswordCallback::setPassword(jcharArray arg0)
	{
		callMethod<void>(
			"setPassword",
			"([C)V",
			arg0
		);
	}
} // namespace javax::security::auth::callback

