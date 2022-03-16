#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JCharArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SNIServerName.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean SNIServerName::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray SNIServerName::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline jint SNIServerName::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint SNIServerName::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SNIServerName::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::net::ssl

// Base class headers

