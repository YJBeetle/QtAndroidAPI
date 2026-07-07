#pragma once

#include "../ComponentName.def.hpp"
#include "./ActivityInfo.def.hpp"
#include "./ApplicationInfo.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./LauncherActivityInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::pm::ActivityInfo LauncherActivityInfo::getActivityInfo() const
	{
		return callObjectMethod(
			"getActivityInfo",
			"()Landroid/content/pm/ActivityInfo;"
		);
	}
	inline android::content::pm::ApplicationInfo LauncherActivityInfo::getApplicationInfo() const
	{
		return callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	inline android::graphics::drawable::Drawable LauncherActivityInfo::getBadgedIcon(jint arg0) const
	{
		return callObjectMethod(
			"getBadgedIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline android::content::ComponentName LauncherActivityInfo::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline jlong LauncherActivityInfo::getFirstInstallTime() const
	{
		return callMethod<jlong>(
			"getFirstInstallTime",
			"()J"
		);
	}
	inline android::graphics::drawable::Drawable LauncherActivityInfo::getIcon(jint arg0) const
	{
		return callObjectMethod(
			"getIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline JString LauncherActivityInfo::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jfloat LauncherActivityInfo::getLoadingProgress() const
	{
		return callMethod<jfloat>(
			"getLoadingProgress",
			"()F"
		);
	}
	inline JString LauncherActivityInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::UserHandle LauncherActivityInfo::getUser() const
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
