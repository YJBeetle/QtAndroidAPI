#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/Provider.hpp"
#include "./ExemptionMechanismSpi.hpp"
#include "./ExemptionMechanism.hpp"

namespace javax::crypto
{
	// Fields
	
	ExemptionMechanism::ExemptionMechanism(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ExemptionMechanism::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			arg0
		);
	}
	QAndroidJniObject ExemptionMechanism::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ExemptionMechanism::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ExemptionMechanism::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ExemptionMechanism::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/ExemptionMechanism;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ExemptionMechanism::getInstance(const QString &arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/ExemptionMechanism;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jbyteArray ExemptionMechanism::genExemptionBlob()
	{
		return __thiz.callObjectMethod(
			"genExemptionBlob",
			"()[B"
		).object<jbyteArray>();
	}
	jint ExemptionMechanism::genExemptionBlob(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"genExemptionBlob",
			"([B)I",
			arg0
		);
	}
	jint ExemptionMechanism::genExemptionBlob(jbyteArray arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"genExemptionBlob",
			"([BI)I",
			arg0,
			arg1
		);
	}
	jstring ExemptionMechanism::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ExemptionMechanism::getOutputSize(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOutputSize",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject ExemptionMechanism::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void ExemptionMechanism::init(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.__jniObject().object()
		);
	}
	void ExemptionMechanism::init(__JniBaseClass arg0, java::security::AlgorithmParameters arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/AlgorithmParameters;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ExemptionMechanism::init(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean ExemptionMechanism::isCryptoAllowed(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCryptoAllowed",
			"(Ljava/security/Key;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace javax::crypto

