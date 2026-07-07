#pragma once

#include "./RangingDevice.def.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./RangingDevice_Builder.def.hpp"

namespace android::ranging
{
	// Fields
	
	// Constructors
	inline RangingDevice_Builder::RangingDevice_Builder()
		: JObject(
			"android.ranging.RangingDevice$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::ranging::RangingDevice RangingDevice_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/RangingDevice;"
		);
	}
	inline android::ranging::RangingDevice_Builder RangingDevice_Builder::setUuid(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"setUuid",
			"(Ljava/util/UUID;)Landroid/ranging/RangingDevice$Builder;",
			arg0.object()
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
