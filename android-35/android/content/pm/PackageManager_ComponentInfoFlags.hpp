#pragma once

#include "./PackageManager_ComponentInfoFlags.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::pm::PackageManager_ComponentInfoFlags PackageManager_ComponentInfoFlags::of(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.content.pm.PackageManager$ComponentInfoFlags",
			"of",
			"(J)Landroid/content/pm/PackageManager$ComponentInfoFlags;",
			arg0
		);
	}
	inline jlong PackageManager_ComponentInfoFlags::getValue() const
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
