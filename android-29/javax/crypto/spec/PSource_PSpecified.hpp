#pragma once

#include "../../../JByteArray.hpp"
#include "./PSource_PSpecified.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	inline javax::crypto::spec::PSource_PSpecified PSource_PSpecified::DEFAULT()
	{
		return getStaticObjectField(
			"javax.crypto.spec.PSource$PSpecified",
			"DEFAULT",
			"Ljavax/crypto/spec/PSource$PSpecified;"
		);
	}
	
	// Constructors
	inline PSource_PSpecified::PSource_PSpecified(JByteArray arg0)
		: javax::crypto::spec::PSource(
			"javax.crypto.spec.PSource$PSpecified",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	inline JByteArray PSource_PSpecified::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

// Base class headers
#include "./PSource.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto::spec;
#endif
