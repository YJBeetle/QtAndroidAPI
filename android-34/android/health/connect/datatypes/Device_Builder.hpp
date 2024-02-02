#pragma once

#include "./Device.def.hpp"
#include "../../../../JString.hpp"
#include "./Device_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline Device_Builder::Device_Builder()
		: JObject(
			"android.health.connect.datatypes.Device$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::health::connect::datatypes::Device Device_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/Device;"
		);
	}
	inline android::health::connect::datatypes::Device_Builder Device_Builder::setManufacturer(JString arg0) const
	{
		return callObjectMethod(
			"setManufacturer",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/Device$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::Device_Builder Device_Builder::setModel(JString arg0) const
	{
		return callObjectMethod(
			"setModel",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/Device$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::Device_Builder Device_Builder::setType(jint arg0) const
	{
		return callObjectMethod(
			"setType",
			"(I)Landroid/health/connect/datatypes/Device$Builder;",
			arg0
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
