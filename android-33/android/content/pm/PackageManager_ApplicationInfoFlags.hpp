#pragma once

#include "./PackageManager_ApplicationInfoFlags.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::pm::PackageManager_ApplicationInfoFlags PackageManager_ApplicationInfoFlags::of(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.content.pm.PackageManager$ApplicationInfoFlags",
			"of",
			"(J)Landroid/content/pm/PackageManager$ApplicationInfoFlags;",
			arg0
		);
	}
	inline jlong PackageManager_ApplicationInfoFlags::getValue() const
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
