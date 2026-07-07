#pragma once

#include "../../../JByteArray.hpp"
#include "./UwbAddress.def.hpp"
#include "./UwbComplexChannel.def.hpp"
#include "./UwbRangingParams.def.hpp"
#include "./UwbRangingParams_Builder.def.hpp"

namespace android::ranging::uwb
{
	// Fields
	
	// Constructors
	inline UwbRangingParams_Builder::UwbRangingParams_Builder(jint arg0, jint arg1, android::ranging::uwb::UwbAddress arg2, android::ranging::uwb::UwbAddress arg3)
		: JObject(
			"android.ranging.uwb.UwbRangingParams$Builder",
			"(IILandroid/ranging/uwb/UwbAddress;Landroid/ranging/uwb/UwbAddress;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::ranging::uwb::UwbRangingParams UwbRangingParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/uwb/UwbRangingParams;"
		);
	}
	inline android::ranging::uwb::UwbRangingParams_Builder UwbRangingParams_Builder::setComplexChannel(android::ranging::uwb::UwbComplexChannel arg0) const
	{
		return callObjectMethod(
			"setComplexChannel",
			"(Landroid/ranging/uwb/UwbComplexChannel;)Landroid/ranging/uwb/UwbRangingParams$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::uwb::UwbRangingParams_Builder UwbRangingParams_Builder::setRangingUpdateRate(jint arg0) const
	{
		return callObjectMethod(
			"setRangingUpdateRate",
			"(I)Landroid/ranging/uwb/UwbRangingParams$Builder;",
			arg0
		);
	}
	inline android::ranging::uwb::UwbRangingParams_Builder UwbRangingParams_Builder::setSessionKeyInfo(JByteArray arg0) const
	{
		return callObjectMethod(
			"setSessionKeyInfo",
			"([B)Landroid/ranging/uwb/UwbRangingParams$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::ranging::uwb::UwbRangingParams_Builder UwbRangingParams_Builder::setSlotDuration(jint arg0) const
	{
		return callObjectMethod(
			"setSlotDuration",
			"(I)Landroid/ranging/uwb/UwbRangingParams$Builder;",
			arg0
		);
	}
	inline android::ranging::uwb::UwbRangingParams_Builder UwbRangingParams_Builder::setSubSessionId(jint arg0) const
	{
		return callObjectMethod(
			"setSubSessionId",
			"(I)Landroid/ranging/uwb/UwbRangingParams$Builder;",
			arg0
		);
	}
	inline android::ranging::uwb::UwbRangingParams_Builder UwbRangingParams_Builder::setSubSessionKeyInfo(JByteArray arg0) const
	{
		return callObjectMethod(
			"setSubSessionKeyInfo",
			"([B)Landroid/ranging/uwb/UwbRangingParams$Builder;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::ranging::uwb

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::uwb;
#endif
