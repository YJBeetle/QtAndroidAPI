#include "./MGF1ParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	QAndroidJniObject MGF1ParameterSpec::SHA1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA1",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	QAndroidJniObject MGF1ParameterSpec::SHA224()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA224",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	QAndroidJniObject MGF1ParameterSpec::SHA256()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA256",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	QAndroidJniObject MGF1ParameterSpec::SHA384()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA384",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	QAndroidJniObject MGF1ParameterSpec::SHA3_224()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA3_224",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	QAndroidJniObject MGF1ParameterSpec::SHA3_256()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA3_256",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	QAndroidJniObject MGF1ParameterSpec::SHA3_384()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA3_384",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	QAndroidJniObject MGF1ParameterSpec::SHA3_512()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA3_512",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	QAndroidJniObject MGF1ParameterSpec::SHA512()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA512",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	QAndroidJniObject MGF1ParameterSpec::SHA512_224()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA512_224",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	QAndroidJniObject MGF1ParameterSpec::SHA512_256()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA512_256",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	
	// QAndroidJniObject forward
	MGF1ParameterSpec::MGF1ParameterSpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MGF1ParameterSpec::MGF1ParameterSpec(jstring arg0)
		: __JniBaseClass(
			"java.security.spec.MGF1ParameterSpec",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring MGF1ParameterSpec::getDigestAlgorithm()
	{
		return callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MGF1ParameterSpec::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::spec

