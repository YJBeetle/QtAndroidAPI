#pragma once

#include "./TetheringManager_TetheringRequest.def.hpp"
#include "./wifi/SoftApConfiguration.def.hpp"
#include "./TetheringManager_TetheringRequest_Builder.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline TetheringManager_TetheringRequest_Builder::TetheringManager_TetheringRequest_Builder(jint arg0)
		: JObject(
			"android.net.TetheringManager$TetheringRequest$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::net::TetheringManager_TetheringRequest TetheringManager_TetheringRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/TetheringManager$TetheringRequest;"
		);
	}
	inline android::net::TetheringManager_TetheringRequest_Builder TetheringManager_TetheringRequest_Builder::setSoftApConfiguration(android::net::wifi::SoftApConfiguration arg0) const
	{
		return callObjectMethod(
			"setSoftApConfiguration",
			"(Landroid/net/wifi/SoftApConfiguration;)Landroid/net/TetheringManager$TetheringRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
