#pragma once

#include "../content/Context.def.hpp"
#include "./KeyPairGeneratorSpec.def.hpp"
#include "../../JString.hpp"
#include "../../java/math/BigInteger.def.hpp"
#include "../../java/util/Date.def.hpp"
#include "../../javax/security/auth/x500/X500Principal.def.hpp"
#include "./KeyPairGeneratorSpec_Builder.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	inline KeyPairGeneratorSpec_Builder::KeyPairGeneratorSpec_Builder(android::content::Context arg0)
		: JObject(
			"android.security.KeyPairGeneratorSpec$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::security::KeyPairGeneratorSpec KeyPairGeneratorSpec_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/KeyPairGeneratorSpec;"
		);
	}
	inline android::security::KeyPairGeneratorSpec_Builder KeyPairGeneratorSpec_Builder::setAlgorithmParameterSpec(JObject arg0) const
	{
		return callObjectMethod(
			"setAlgorithmParameterSpec",
			"(Ljava/security/spec/AlgorithmParameterSpec;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object()
		);
	}
	inline android::security::KeyPairGeneratorSpec_Builder KeyPairGeneratorSpec_Builder::setAlias(JString arg0) const
	{
		return callObjectMethod(
			"setAlias",
			"(Ljava/lang/String;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::security::KeyPairGeneratorSpec_Builder KeyPairGeneratorSpec_Builder::setEncryptionRequired() const
	{
		return callObjectMethod(
			"setEncryptionRequired",
			"()Landroid/security/KeyPairGeneratorSpec$Builder;"
		);
	}
	inline android::security::KeyPairGeneratorSpec_Builder KeyPairGeneratorSpec_Builder::setEndDate(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setEndDate",
			"(Ljava/util/Date;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object()
		);
	}
	inline android::security::KeyPairGeneratorSpec_Builder KeyPairGeneratorSpec_Builder::setKeySize(jint arg0) const
	{
		return callObjectMethod(
			"setKeySize",
			"(I)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0
		);
	}
	inline android::security::KeyPairGeneratorSpec_Builder KeyPairGeneratorSpec_Builder::setKeyType(JString arg0) const
	{
		return callObjectMethod(
			"setKeyType",
			"(Ljava/lang/String;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::security::KeyPairGeneratorSpec_Builder KeyPairGeneratorSpec_Builder::setSerialNumber(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"setSerialNumber",
			"(Ljava/math/BigInteger;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object()
		);
	}
	inline android::security::KeyPairGeneratorSpec_Builder KeyPairGeneratorSpec_Builder::setStartDate(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setStartDate",
			"(Ljava/util/Date;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object()
		);
	}
	inline android::security::KeyPairGeneratorSpec_Builder KeyPairGeneratorSpec_Builder::setSubject(javax::security::auth::x500::X500Principal arg0) const
	{
		return callObjectMethod(
			"setSubject",
			"(Ljavax/security/auth/x500/X500Principal;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object()
		);
	}
} // namespace android::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security;
#endif
