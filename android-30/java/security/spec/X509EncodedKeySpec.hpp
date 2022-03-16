#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./X509EncodedKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline X509EncodedKeySpec::X509EncodedKeySpec(JByteArray arg0)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.X509EncodedKeySpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline X509EncodedKeySpec::X509EncodedKeySpec(JByteArray arg0, JString arg1)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.X509EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JByteArray X509EncodedKeySpec::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline JString X509EncodedKeySpec::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::spec

// Base class headers
#include "./EncodedKeySpec.hpp"

