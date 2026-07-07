#pragma once

#include "../../../graphics/Bitmap.def.hpp"
#include "../../../../JString.hpp"
#include "./AppInfo.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::Bitmap AppInfo::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline JString AppInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString AppInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
