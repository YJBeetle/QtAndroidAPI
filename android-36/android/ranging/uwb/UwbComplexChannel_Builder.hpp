#pragma once

#include "./UwbComplexChannel.def.hpp"
#include "./UwbComplexChannel_Builder.def.hpp"

namespace android::ranging::uwb
{
	// Fields
	
	// Constructors
	inline UwbComplexChannel_Builder::UwbComplexChannel_Builder()
		: JObject(
			"android.ranging.uwb.UwbComplexChannel$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::ranging::uwb::UwbComplexChannel UwbComplexChannel_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/uwb/UwbComplexChannel;"
		);
	}
	inline android::ranging::uwb::UwbComplexChannel_Builder UwbComplexChannel_Builder::setChannel(jint arg0) const
	{
		return callObjectMethod(
			"setChannel",
			"(I)Landroid/ranging/uwb/UwbComplexChannel$Builder;",
			arg0
		);
	}
	inline android::ranging::uwb::UwbComplexChannel_Builder UwbComplexChannel_Builder::setPreambleIndex(jint arg0) const
	{
		return callObjectMethod(
			"setPreambleIndex",
			"(I)Landroid/ranging/uwb/UwbComplexChannel$Builder;",
			arg0
		);
	}
} // namespace android::ranging::uwb

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::uwb;
#endif
