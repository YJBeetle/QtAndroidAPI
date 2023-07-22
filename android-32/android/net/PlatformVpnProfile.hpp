#pragma once

#include "../../JString.hpp"
#include "./PlatformVpnProfile.def.hpp"

namespace android::net
{
	// Fields
	inline jint PlatformVpnProfile::TYPE_IKEV2_IPSEC_PSK()
	{
		return getStaticField<jint>(
			"android.net.PlatformVpnProfile",
			"TYPE_IKEV2_IPSEC_PSK"
		);
	}
	inline jint PlatformVpnProfile::TYPE_IKEV2_IPSEC_RSA()
	{
		return getStaticField<jint>(
			"android.net.PlatformVpnProfile",
			"TYPE_IKEV2_IPSEC_RSA"
		);
	}
	inline jint PlatformVpnProfile::TYPE_IKEV2_IPSEC_USER_PASS()
	{
		return getStaticField<jint>(
			"android.net.PlatformVpnProfile",
			"TYPE_IKEV2_IPSEC_USER_PASS"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PlatformVpnProfile::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JString PlatformVpnProfile::getTypeString() const
	{
		return callObjectMethod(
			"getTypeString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
