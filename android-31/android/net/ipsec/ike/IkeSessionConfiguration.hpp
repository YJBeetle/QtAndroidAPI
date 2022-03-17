#pragma once

#include "./IkeSessionConnectionInfo.def.hpp"
#include "../../../../JString.hpp"
#include "./IkeSessionConfiguration.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	inline jint IkeSessionConfiguration::EXTENSION_TYPE_FRAGMENTATION()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionConfiguration",
			"EXTENSION_TYPE_FRAGMENTATION"
		);
	}
	inline jint IkeSessionConfiguration::EXTENSION_TYPE_MOBIKE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionConfiguration",
			"EXTENSION_TYPE_MOBIKE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::ipsec::ike::IkeSessionConnectionInfo IkeSessionConfiguration::getIkeSessionConnectionInfo() const
	{
		return callObjectMethod(
			"getIkeSessionConnectionInfo",
			"()Landroid/net/ipsec/ike/IkeSessionConnectionInfo;"
		);
	}
	inline JString IkeSessionConfiguration::getRemoteApplicationVersion() const
	{
		return callObjectMethod(
			"getRemoteApplicationVersion",
			"()Ljava/lang/String;"
		);
	}
	inline JObject IkeSessionConfiguration::getRemoteVendorIds() const
	{
		return callObjectMethod(
			"getRemoteVendorIds",
			"()Ljava/util/List;"
		);
	}
	inline jboolean IkeSessionConfiguration::isIkeExtensionEnabled(jint arg0) const
	{
		return callMethod<jboolean>(
			"isIkeExtensionEnabled",
			"(I)Z",
			arg0
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
