#include "../../JString.hpp"
#include "../../javax/security/auth/Subject.hpp"
#include "./AuthProvider.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	void AuthProvider::login(javax::security::auth::Subject arg0, JObject arg1) const
	{
		callMethod<void>(
			"login",
			"(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AuthProvider::logout() const
	{
		callMethod<void>(
			"logout",
			"()V"
		);
	}
	void AuthProvider::setCallbackHandler(JObject arg0) const
	{
		callMethod<void>(
			"setCallbackHandler",
			"(Ljavax/security/auth/callback/CallbackHandler;)V",
			arg0.object()
		);
	}
} // namespace java::security

