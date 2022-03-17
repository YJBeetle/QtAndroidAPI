#pragma once

#include "./StandardConstants.def.hpp"

namespace javax::net::ssl
{
	// Fields
	inline jint StandardConstants::SNI_HOST_NAME()
	{
		return getStaticField<jint>(
			"javax.net.ssl.StandardConstants",
			"SNI_HOST_NAME"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
