#include "../../../../JCharArray.hpp"
#include "../../../../JString.hpp"
#include "./PasswordCallback.hpp"

namespace javax::security::auth::callback
{
	// Fields
	
	// QAndroidJniObject forward
	PasswordCallback::PasswordCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PasswordCallback::PasswordCallback(JString arg0, jboolean arg1)
		: JObject(
			"javax.security.auth.callback.PasswordCallback",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
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
	JCharArray PasswordCallback::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		);
	}
	JString PasswordCallback::getPrompt()
	{
		return callObjectMethod(
			"getPrompt",
			"()Ljava/lang/String;"
		);
	}
	jboolean PasswordCallback::isEchoOn()
	{
		return callMethod<jboolean>(
			"isEchoOn",
			"()Z"
		);
	}
	void PasswordCallback::setPassword(JCharArray arg0)
	{
		callMethod<void>(
			"setPassword",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
} // namespace javax::security::auth::callback

