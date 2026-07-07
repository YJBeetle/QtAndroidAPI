#pragma once

#include "./BleCsRangingParams.def.hpp"
#include "../../../../JString.hpp"
#include "./BleCsRangingParams_Builder.def.hpp"

namespace android::ranging::ble::cs
{
	// Fields
	
	// Constructors
	inline BleCsRangingParams_Builder::BleCsRangingParams_Builder(JString arg0)
		: JObject(
			"android.ranging.ble.cs.BleCsRangingParams$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::ranging::ble::cs::BleCsRangingParams BleCsRangingParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/ble/cs/BleCsRangingParams;"
		);
	}
	inline android::ranging::ble::cs::BleCsRangingParams_Builder BleCsRangingParams_Builder::setLocationType(jint arg0) const
	{
		return callObjectMethod(
			"setLocationType",
			"(I)Landroid/ranging/ble/cs/BleCsRangingParams$Builder;",
			arg0
		);
	}
	inline android::ranging::ble::cs::BleCsRangingParams_Builder BleCsRangingParams_Builder::setRangingUpdateRate(jint arg0) const
	{
		return callObjectMethod(
			"setRangingUpdateRate",
			"(I)Landroid/ranging/ble/cs/BleCsRangingParams$Builder;",
			arg0
		);
	}
	inline android::ranging::ble::cs::BleCsRangingParams_Builder BleCsRangingParams_Builder::setSecurityLevel(jint arg0) const
	{
		return callObjectMethod(
			"setSecurityLevel",
			"(I)Landroid/ranging/ble/cs/BleCsRangingParams$Builder;",
			arg0
		);
	}
	inline android::ranging::ble::cs::BleCsRangingParams_Builder BleCsRangingParams_Builder::setSightType(jint arg0) const
	{
		return callObjectMethod(
			"setSightType",
			"(I)Landroid/ranging/ble/cs/BleCsRangingParams$Builder;",
			arg0
		);
	}
} // namespace android::ranging::ble::cs

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::ble::cs;
#endif
