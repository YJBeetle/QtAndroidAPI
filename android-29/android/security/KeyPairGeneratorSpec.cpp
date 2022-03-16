#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "../../java/math/BigInteger.hpp"
#include "../../java/util/Date.hpp"
#include "../../javax/security/auth/x500/X500Principal.hpp"
#include "./KeyPairGeneratorSpec.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject KeyPairGeneratorSpec::getAlgorithmParameterSpec() const
	{
		return callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	android::content::Context KeyPairGeneratorSpec::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	java::util::Date KeyPairGeneratorSpec::getEndDate() const
	{
		return callObjectMethod(
			"getEndDate",
			"()Ljava/util/Date;"
		);
	}
	jint KeyPairGeneratorSpec::getKeySize() const
	{
		return callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	JString KeyPairGeneratorSpec::getKeyType() const
	{
		return callObjectMethod(
			"getKeyType",
			"()Ljava/lang/String;"
		);
	}
	JString KeyPairGeneratorSpec::getKeystoreAlias() const
	{
		return callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		);
	}
	java::math::BigInteger KeyPairGeneratorSpec::getSerialNumber() const
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	java::util::Date KeyPairGeneratorSpec::getStartDate() const
	{
		return callObjectMethod(
			"getStartDate",
			"()Ljava/util/Date;"
		);
	}
	javax::security::auth::x500::X500Principal KeyPairGeneratorSpec::getSubjectDN() const
	{
		return callObjectMethod(
			"getSubjectDN",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jboolean KeyPairGeneratorSpec::isEncryptionRequired() const
	{
		return callMethod<jboolean>(
			"isEncryptionRequired",
			"()Z"
		);
	}
} // namespace android::security

