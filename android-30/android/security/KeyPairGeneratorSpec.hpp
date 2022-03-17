#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "../../java/math/BigInteger.def.hpp"
#include "../../java/util/Date.def.hpp"
#include "../../javax/security/auth/x500/X500Principal.def.hpp"
#include "./KeyPairGeneratorSpec.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject KeyPairGeneratorSpec::getAlgorithmParameterSpec() const
	{
		return callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline android::content::Context KeyPairGeneratorSpec::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline java::util::Date KeyPairGeneratorSpec::getEndDate() const
	{
		return callObjectMethod(
			"getEndDate",
			"()Ljava/util/Date;"
		);
	}
	inline jint KeyPairGeneratorSpec::getKeySize() const
	{
		return callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	inline JString KeyPairGeneratorSpec::getKeyType() const
	{
		return callObjectMethod(
			"getKeyType",
			"()Ljava/lang/String;"
		);
	}
	inline JString KeyPairGeneratorSpec::getKeystoreAlias() const
	{
		return callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		);
	}
	inline java::math::BigInteger KeyPairGeneratorSpec::getSerialNumber() const
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::util::Date KeyPairGeneratorSpec::getStartDate() const
	{
		return callObjectMethod(
			"getStartDate",
			"()Ljava/util/Date;"
		);
	}
	inline javax::security::auth::x500::X500Principal KeyPairGeneratorSpec::getSubjectDN() const
	{
		return callObjectMethod(
			"getSubjectDN",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	inline jboolean KeyPairGeneratorSpec::isEncryptionRequired() const
	{
		return callMethod<jboolean>(
			"isEncryptionRequired",
			"()Z"
		);
	}
} // namespace android::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security;
#endif
