#include "../../../../JCharArray.hpp"
#include "../../../../JString.hpp"
#include "./PasswordCallback.hpp"

namespace javax::security::auth::callback
{
	// Fields
	
	// QJniObject forward
	PasswordCallback::PasswordCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PasswordCallback::PasswordCallback(JString arg0, jboolean arg1)
		: JObject(
			"javax.security.auth.callback.PasswordCallback",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	void PasswordCallback::clearPassword() const
	{
		callMethod<void>(
			"clearPassword",
			"()V"
		);
	}
	JCharArray PasswordCallback::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		);
	}
	JString PasswordCallback::getPrompt() const
	{
		return callObjectMethod(
			"getPrompt",
			"()Ljava/lang/String;"
		);
	}
	jboolean PasswordCallback::isEchoOn() const
	{
		return callMethod<jboolean>(
			"isEchoOn",
			"()Z"
		);
	}
	void PasswordCallback::setPassword(JCharArray arg0) const
	{
		callMethod<void>(
			"setPassword",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
} // namespace javax::security::auth::callback

