#pragma once

#include "./DataOrigin.def.hpp"
#include "../../../../JString.hpp"
#include "./DataOrigin_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline DataOrigin_Builder::DataOrigin_Builder()
		: JObject(
			"android.health.connect.datatypes.DataOrigin$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::health::connect::datatypes::DataOrigin DataOrigin_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/DataOrigin;"
		);
	}
	inline android::health::connect::datatypes::DataOrigin_Builder DataOrigin_Builder::setPackageName(JString arg0) const
	{
		return callObjectMethod(
			"setPackageName",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/DataOrigin$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
