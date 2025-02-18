#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./PKCS8EncodedKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(JByteArray arg0)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(JByteArray arg0, JString arg1)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JByteArray PKCS8EncodedKeySpec::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline JString PKCS8EncodedKeySpec::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::spec

// Base class headers
#include "./EncodedKeySpec.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif
