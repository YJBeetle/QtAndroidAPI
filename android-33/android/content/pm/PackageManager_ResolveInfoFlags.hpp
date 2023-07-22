#pragma once

#include "./PackageManager_ResolveInfoFlags.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::pm::PackageManager_ResolveInfoFlags PackageManager_ResolveInfoFlags::of(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.content.pm.PackageManager$ResolveInfoFlags",
			"of",
			"(J)Landroid/content/pm/PackageManager$ResolveInfoFlags;",
			arg0
		);
	}
	inline jlong PackageManager_ResolveInfoFlags::getValue() const
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
