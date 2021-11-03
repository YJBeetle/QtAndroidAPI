#include "../../../JString.hpp"
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
	
	// QAndroidJniObject forward
	OAEPParameterSpec::OAEPParameterSpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	OAEPParameterSpec::OAEPParameterSpec(JString arg0, JString arg1, JObject arg2, javax::crypto::spec::PSource arg3)
		: JObject(
			"javax.crypto.spec.OAEPParameterSpec",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;Ljavax/crypto/spec/PSource;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	JString OAEPParameterSpec::getDigestAlgorithm() const
	{
		return callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JString OAEPParameterSpec::getMGFAlgorithm() const
	{
		return callObjectMethod(
			"getMGFAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JObject OAEPParameterSpec::getMGFParameters() const
	{
		return callObjectMethod(
			"getMGFParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	javax::crypto::spec::PSource OAEPParameterSpec::getPSource() const
	{
		return callObjectMethod(
			"getPSource",
			"()Ljavax/crypto/spec/PSource;"
		);
	}
} // namespace javax::crypto::spec

