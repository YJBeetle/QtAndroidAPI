#pragma once

#include "./LauncherApps_ArchiveCompatibilityParams.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline LauncherApps_ArchiveCompatibilityParams::LauncherApps_ArchiveCompatibilityParams()
		: JObject(
			"android.content.pm.LauncherApps$ArchiveCompatibilityParams",
			"()V"
		) {}
	
	// Methods
	inline void LauncherApps_ArchiveCompatibilityParams::setEnableIconOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableIconOverlay",
			"(Z)V",
			arg0
		);
	}
	inline void LauncherApps_ArchiveCompatibilityParams::setEnableUnarchivalConfirmation(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableUnarchivalConfirmation",
			"(Z)V",
			arg0
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
