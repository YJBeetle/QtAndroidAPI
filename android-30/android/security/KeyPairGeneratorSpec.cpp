#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "../../java/math/BigInteger.hpp"
#include "../../java/util/Date.hpp"
#include "../../javax/security/auth/x500/X500Principal.hpp"
#include "./KeyPairGeneratorSpec.hpp"

namespace android::security
{
	// Fields
	
	// QJniObject forward
	KeyPairGeneratorSpec::KeyPairGeneratorSpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject KeyPairGeneratorSpec::getAlgorithmParameterSpec()
	{
		return callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	android::content::Context KeyPairGeneratorSpec::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	java::util::Date KeyPairGeneratorSpec::getEndDate()
	{
		return callObjectMethod(
			"getEndDate",
			"()Ljava/util/Date;"
		);
	}
	jint KeyPairGeneratorSpec::getKeySize()
	{
		return callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	JString KeyPairGeneratorSpec::getKeyType()
	{
		return callObjectMethod(
			"getKeyType",
			"()Ljava/lang/String;"
		);
	}
	JString KeyPairGeneratorSpec::getKeystoreAlias()
	{
		return callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		);
	}
	java::math::BigInteger KeyPairGeneratorSpec::getSerialNumber()
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	java::util::Date KeyPairGeneratorSpec::getStartDate()
	{
		return callObjectMethod(
			"getStartDate",
			"()Ljava/util/Date;"
		);
	}
	javax::security::auth::x500::X500Principal KeyPairGeneratorSpec::getSubjectDN()
	{
		return callObjectMethod(
			"getSubjectDN",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jboolean KeyPairGeneratorSpec::isEncryptionRequired()
	{
		return callMethod<jboolean>(
			"isEncryptionRequired",
			"()Z"
		);
	}
} // namespace android::security

