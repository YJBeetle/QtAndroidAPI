#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Timestamp.def.hpp"
#include "./cert/CertPath.def.hpp"
#include "./CodeSigner.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline CodeSigner::CodeSigner(java::security::cert::CertPath arg0, java::security::Timestamp arg1)
		: JObject(
			"java.security.CodeSigner",
			"(Ljava/security/cert/CertPath;Ljava/security/Timestamp;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean CodeSigner::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::security::cert::CertPath CodeSigner::getSignerCertPath() const
	{
		return callObjectMethod(
			"getSignerCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	inline java::security::Timestamp CodeSigner::getTimestamp() const
	{
		return callObjectMethod(
			"getTimestamp",
			"()Ljava/security/Timestamp;"
		);
	}
	inline jint CodeSigner::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CodeSigner::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers

