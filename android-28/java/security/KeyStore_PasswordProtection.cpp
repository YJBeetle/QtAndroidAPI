#include "./KeyStore_PasswordProtection.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyStore_PasswordProtection::KeyStore_PasswordProtection(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyStore_PasswordProtection::KeyStore_PasswordProtection(jcharArray arg0)
		: __JniBaseClass(
			"java.security.KeyStore$PasswordProtection",
			"([C)V",
			arg0
		) {}
	KeyStore_PasswordProtection::KeyStore_PasswordProtection(jcharArray arg0, jstring arg1, __JniBaseClass arg2)
		: __JniBaseClass(
			"java.security.KeyStore$PasswordProtection",
			"([CLjava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	void KeyStore_PasswordProtection::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jcharArray KeyStore_PasswordProtection::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jstring KeyStore_PasswordProtection::getProtectionAlgorithm()
	{
		return callObjectMethod(
			"getProtectionAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass KeyStore_PasswordProtection::getProtectionParameters()
	{
		return callObjectMethod(
			"getProtectionParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jboolean KeyStore_PasswordProtection::isDestroyed()
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
} // namespace java::security

