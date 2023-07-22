#pragma once

#include "./PackageManager_PackageInfoFlags.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::pm::PackageManager_PackageInfoFlags PackageManager_PackageInfoFlags::of(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.content.pm.PackageManager$PackageInfoFlags",
			"of",
			"(J)Landroid/content/pm/PackageManager$PackageInfoFlags;",
			arg0
		);
	}
	inline jlong PackageManager_PackageInfoFlags::getValue() const
	{
		return callMethod<jlong>(
			"getValue",
			"()J"
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
