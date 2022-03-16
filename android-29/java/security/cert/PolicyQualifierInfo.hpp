#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./PolicyQualifierInfo.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline PolicyQualifierInfo::PolicyQualifierInfo(JByteArray arg0)
		: JObject(
			"java.security.cert.PolicyQualifierInfo",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	inline JByteArray PolicyQualifierInfo::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline JByteArray PolicyQualifierInfo::getPolicyQualifier() const
	{
		return callObjectMethod(
			"getPolicyQualifier",
			"()[B"
		);
	}
	inline JString PolicyQualifierInfo::getPolicyQualifierId() const
	{
		return callObjectMethod(
			"getPolicyQualifierId",
			"()Ljava/lang/String;"
		);
	}
	inline JString PolicyQualifierInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers

