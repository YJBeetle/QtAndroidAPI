#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "./KeyStore_PasswordProtection.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStore_PasswordProtection::KeyStore_PasswordProtection(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyStore_PasswordProtection::KeyStore_PasswordProtection(JCharArray arg0)
		: JObject(
			"java.security.KeyStore$PasswordProtection",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	KeyStore_PasswordProtection::KeyStore_PasswordProtection(JCharArray arg0, JString arg1, JObject arg2)
		: JObject(
			"java.security.KeyStore$PasswordProtection",
			"([CLjava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object<jcharArray>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	void KeyStore_PasswordProtection::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	JCharArray KeyStore_PasswordProtection::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		);
	}
	JString KeyStore_PasswordProtection::getProtectionAlgorithm() const
	{
		return callObjectMethod(
			"getProtectionAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JObject KeyStore_PasswordProtection::getProtectionParameters() const
	{
		return callObjectMethod(
			"getProtectionParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jboolean KeyStore_PasswordProtection::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
} // namespace java::security

