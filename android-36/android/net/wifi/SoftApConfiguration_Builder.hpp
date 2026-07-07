#pragma once

#include "./SoftApConfiguration.def.hpp"
#include "../../util/SparseIntArray.def.hpp"
#include "./SoftApConfiguration_Builder.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	inline SoftApConfiguration_Builder::SoftApConfiguration_Builder()
		: JObject(
			"android.net.wifi.SoftApConfiguration$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::SoftApConfiguration SoftApConfiguration_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/SoftApConfiguration;"
		);
	}
	inline android::net::wifi::SoftApConfiguration_Builder SoftApConfiguration_Builder::setChannels(android::util::SparseIntArray arg0) const
	{
		return callObjectMethod(
			"setChannels",
			"(Landroid/util/SparseIntArray;)Landroid/net/wifi/SoftApConfiguration$Builder;",
			arg0.object()
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
