#pragma once

#include "./DnsResolver_DnsException.def.hpp"

namespace android::net
{
	// Fields
	inline jint DnsResolver_DnsException::code()
	{
		return getField<jint>(
			"code"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
