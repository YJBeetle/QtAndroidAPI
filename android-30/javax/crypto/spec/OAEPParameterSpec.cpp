#include "./PSource.hpp"
#include "./OAEPParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	javax::crypto::spec::OAEPParameterSpec OAEPParameterSpec::DEFAULT()
	{
		return getStaticObjectField(
			"javax.crypto.spec.OAEPParameterSpec",
			"DEFAULT",
			"Ljavax/crypto/spec/OAEPParameterSpec;"
		);
	}
	
	// QJniObject forward
	OAEPParameterSpec::OAEPParameterSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	__JniBaseClass OAEPParameterSpec::getMGFParameters()
	{
		return callObjectMethod(
			"getMGFParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	javax::crypto::spec::PSource OAEPParameterSpec::getPSource()
	{
		return callObjectMethod(
			"getPSource",
			"()Ljavax/crypto/spec/PSource;"
		);
	}
} // namespace javax::crypto::spec

