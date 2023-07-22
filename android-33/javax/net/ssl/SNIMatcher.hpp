#pragma once

#include "./SNIServerName.def.hpp"
#include "./SNIMatcher.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint SNIMatcher::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jboolean SNIMatcher::matches(javax::net::ssl::SNIServerName arg0) const
	{
		return callMethod<jboolean>(
			"matches",
			"(Ljavax/net/ssl/SNIServerName;)Z",
			arg0.object()
		);
	}
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
