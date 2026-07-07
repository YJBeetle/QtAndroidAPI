#pragma once

#include "./AdvertisingRequest.def.hpp"
#include "./NsdServiceInfo.def.hpp"
#include "./AdvertisingRequest_Builder.def.hpp"

namespace android::net::nsd
{
	// Fields
	
	// Constructors
	inline AdvertisingRequest_Builder::AdvertisingRequest_Builder(android::net::nsd::NsdServiceInfo arg0)
		: JObject(
			"android.net.nsd.AdvertisingRequest$Builder",
			"(Landroid/net/nsd/NsdServiceInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::nsd::AdvertisingRequest AdvertisingRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/nsd/AdvertisingRequest;"
		);
	}
	inline android::net::nsd::AdvertisingRequest_Builder AdvertisingRequest_Builder::setFlags(jlong arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(J)Landroid/net/nsd/AdvertisingRequest$Builder;",
			arg0
		);
	}
	inline android::net::nsd::AdvertisingRequest_Builder AdvertisingRequest_Builder::setProtocolType(jint arg0) const
	{
		return callObjectMethod(
			"setProtocolType",
			"(I)Landroid/net/nsd/AdvertisingRequest$Builder;",
			arg0
		);
	}
} // namespace android::net::nsd

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::nsd;
#endif
