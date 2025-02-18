#pragma once

#include "../../JString.hpp"
#include "../../java/net/InetAddress.def.hpp"
#include "./InetAddresses.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean InetAddresses::isNumericAddress(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.InetAddresses",
			"isNumericAddress",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline java::net::InetAddress InetAddresses::parseNumericAddress(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.InetAddresses",
			"parseNumericAddress",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
