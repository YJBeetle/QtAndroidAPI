#include "./KeyStore_PasswordProtection.hpp"

namespace java::security
{
	// Fields
	
	KeyStore_PasswordProtection::KeyStore_PasswordProtection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyStore_PasswordProtection::KeyStore_PasswordProtection(jcharArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$PasswordProtection",
			"([C)V",
			arg0
		);
	}
	KeyStore_PasswordProtection::KeyStore_PasswordProtection(jcharArray &arg0, jstring &arg1, __JniBaseClass &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$PasswordProtection",
			"([CLjava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	KeyStore_PasswordProtection::KeyStore_PasswordProtection(jcharArray &arg0, const QString &arg1, __JniBaseClass &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$PasswordProtection",
			"([CLjava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void KeyStore_PasswordProtection::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jcharArray KeyStore_PasswordProtection::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jstring KeyStore_PasswordProtection::getProtectionAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getProtectionAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyStore_PasswordProtection::getProtectionParameters()
	{
		return __thiz.callObjectMethod(
			"getProtectionParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jboolean KeyStore_PasswordProtection::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
} // namespace java::security

