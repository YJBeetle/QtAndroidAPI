#include "./PSource.hpp"
#include "./OAEPParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	QAndroidJniObject OAEPParameterSpec::DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.crypto.spec.OAEPParameterSpec",
			"DEFAULT",
			"Ljavax/crypto/spec/OAEPParameterSpec;"
		);
	}
	
	// QAndroidJniObject forward
	OAEPParameterSpec::OAEPParameterSpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	OAEPParameterSpec::OAEPParameterSpec(jstring arg0, jstring arg1, __JniBaseClass arg2, javax::crypto::spec::PSource arg3)
		: __JniBaseClass(
			"javax.crypto.spec.OAEPParameterSpec",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;Ljavax/crypto/spec/PSource;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	jstring OAEPParameterSpec::getDigestAlgorithm()
	{
		return callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OAEPParameterSpec::getMGFAlgorithm()
	{
		return callObjectMethod(
			"getMGFAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject OAEPParameterSpec::getMGFParameters()
	{
		return callObjectMethod(
			"getMGFParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	QAndroidJniObject OAEPParameterSpec::getPSource()
	{
		return callObjectMethod(
			"getPSource",
			"()Ljavax/crypto/spec/PSource;"
		);
	}
} // namespace javax::crypto::spec
